#include <unistd.h>

#include "Game.hpp"
#include "Player.hpp"
#include "Screen.hpp"

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
	Player player(10, 10, '>');
	WINDOW *info_win = newwin(5, 60, 1, 2);

	while (running_)
	{

		screen_->updateBoardSize();
		keyHandler_->readKeys();
		if (keyHandler_->isPressed(KEY_RIGHT))
			player.movX(1);
		if (keyHandler_->isPressed(KEY_LEFT))
			player.movX(-1);
		if (keyHandler_->isPressed(KEY_UP))
			player.movY(-1);
		if (keyHandler_->isPressed(KEY_DOWN))
			player.movY(1);
		if (keyHandler_->isPressed('q') || keyHandler_->isPressed('Q'))
			exit();

		keyHandler_->reset();
		screen_->clr();
		screen_->info(info_win, lives_, score_);
		screen_->draw(player.getPosition(), player.getCharacter());
		usleep(mspf_);
	}
	endwin();
}

void	Game::exit(void)
{
	running_ = false;

	return;
}
