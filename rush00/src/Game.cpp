#include <unistd.h>

#include "Game.hpp"
#include "Player.hpp"
#include "Screen.hpp"
#include "Scene.hpp"

//~--------------------------------------------------------~
// Init

void	Game::init(void)
{
	initscr();
	cbreak();
	noecho();
	keypad(stdscr, true);
	curs_set(0);
	nodelay(stdscr, true);

	mspf_ = (1.0f / (float)fps_) * 1000000.0f; 
	running_ = true;

	screen_ = new Screen;
	keyHandler_ = new KeyHandler;
	scene_ = new Scene;

	return;
}

//~--------------------------------------------------------~
// Constructors & Destructor

Game::Game(void) : time_(0), fps_(30)
{
	init();

	return;
}

Game::Game(int fps) : time_(0), fps_(fps)
{
	init();

	return;
}

Game::Game(Game const& game) : time_(0), fps_(game.getFPS())
{
	init();
	*this = game;

	return;
}

Game::~Game(void)
{
	delete screen_;
	delete keyHandler_;

	return;
}

//~--------------------------------------------------------~
// Operators

Game& Game::operator=(Game const& game)
{
	this->time_ = game.getRunTime();

	return (*this);
}

//~--------------------------------------------------------~
// Gets

int	Game::getRunTime(void) const
{
	return (this->time_);
}

int	Game::getFPS(void) const
{
	return (this->fps_);
}

//~--------------------------------------------------------~
// Functions

void	Game::run(void)
{
	int		parent_x, parent_y, new_y, new_x;
	int		score_size = 5;
	Player* player = new Player(2, 2, '>', keyHandler_, scene_);
	getmaxyx(stdscr, parent_y, parent_x);
	WINDOW* game_win = newwin(parent_y - score_size, parent_x, 0, 0);
	WINDOW* info_win = newwin(score_size, parent_x, parent_y - score_size, 0);
	scene_->addEntity(player);

	while (running_)
	{
		getmaxyx(stdscr, new_y, new_x);
		if (new_y != parent_y || new_x != parent_x)
		{
			parent_x = new_x;
			parent_y = new_y;
		}
		wresize(game_win, new_y - score_size, new_x);
		wresize(info_win, score_size, new_x);
		mvwin(info_win, new_y - score_size, 0);
		//screen_->updateBoardSize();
		keyHandler_->readKeys();
		if (keyHandler_->isPressed('q') || keyHandler_->isPressed('Q'))
			exit();
		scene_->update();
		screen_->clr();
		scene_->display(*screen_);
		keyHandler_->reset();
		screen_->info(info_win, player->lives_, player->score_);
		usleep(mspf_);
	}

	delete player;

	endwin();
}

void	Game::exit(void)
{
	running_ = false;

	return;
}

void	Game::update(void)
{
	for (int i = 0; i < scene_->getEntityCount(); ++i)
		scene_->getEntity(i)->update();

	return;
}

void	Game::displayScene(void)
{
	scene_->display(*screen_);

	return;
}
