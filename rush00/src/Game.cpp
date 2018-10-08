#include <unistd.h>

#include "Game.hpp"
#include "Player.hpp"
#include "Screen.hpp"
#include "Scene.hpp"
#include "Enemy.hpp"

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
	softexit_ = true;
	init_ = true;

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
	delete scene_;

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

void	Game::start(void)
{
	bool startingScreen = true;

	while (startingScreen)
	{
		wrefresh(stdscr);
		box(stdscr, '*', '*');
		mvwaddstr(stdscr, 1, 2, "  ______                    _____                      __  __    _                ");
		mvwaddstr(stdscr, 2, 2, " /_  __/_  ______  ___     / ___/____  ____ ___  ___  / /_/ /_  (_)___  ____ _    ");
		mvwaddstr(stdscr, 3, 2, "  / / / / / / __ \\/ _ \\    \\__ \\/ __ \\/ __ `__ \\/ _ \\/ __/ __ \\/ / __ \\/ __ `/    ");
		mvwaddstr(stdscr, 4, 2, " / / / /_/ / /_/ /  __/   ___/ / /_/ / / / / / /  __/ /_/ / / / / / / / /_/ /     ");
		mvwaddstr(stdscr, 5, 2, "/_/  \\__, / .___/\\___/   /____/\\____/_/ /_/ /_/\\___/\\__/_/ /_/_/_/ /_/\\__, /      ");
		mvwaddstr(stdscr, 6, 2, "    /____/_/                                                         /____/       ");
		mvwaddstr(stdscr, 7, 30, "      ____");
		mvwaddstr(stdscr, 8, 30, "     /___/\\__           PRESS y TO START");
		mvwaddstr(stdscr, 9, 30, "    _\\   \\/_/\\__       PRESS n to EXIT");
		mvwaddstr(stdscr, 10, 30, "  __\\       \\/_/\\             ");
		mvwaddstr(stdscr, 11, 30, "  \\   __    __ \\ \\                ");
		mvwaddstr(stdscr, 12, 30, " __\\  \\_\\   \\_\\ \\ \\   __    ");
		mvwaddstr(stdscr, 13, 30, "/_/\\   __   __   \\ \\_/_/\\   ");
		mvwaddstr(stdscr, 14, 30, "\\_\\/_\\__\\/\\__\\/\\__\\/_\\_\\/ ");
		mvwaddstr(stdscr, 15, 30, "   \\_\\/_/\\       /_\\_\\/         ");
		mvwaddstr(stdscr, 16, 30, "      \\_\\/       \\_\\/              ");
		keyHandler_->readKeys();
		if (keyHandler_->isPressed('y') || keyHandler_->isPressed('Y'))
			startingScreen = false;
		else if (keyHandler_->isPressed('n') || keyHandler_->isPressed('N'))
		{
			endwin();
			running_ = false;
			softexit_ = false;
			startingScreen = false;
		}
		usleep(mspf_);
	}
}

void	Game::run(void)
{
	scene_->resetScore();

	int parent_x, parent_y, new_y, new_x;
	int	score_size = 5;

	running_ = true;
	softexit_ = true;

	getmaxyx(stdscr, parent_y, parent_x);

	//resizeterm(parent_y - score_size, parent_x);
//	WINDOW* game_win = newwin(parent_y - score_size, parent_x, 0, 0);
	WINDOW* info_win = newwin(score_size, parent_x, parent_y - score_size, 0);

	if (init_)
		start();

	init_ = false;

	Player* player = new Player(0, 2, '>', keyHandler_, scene_, this);

	player->setEntityIdx(scene_->addEntity(player));

	while (running_)
	{
		getmaxyx(stdscr, new_y, new_x);
		if (new_y != parent_y || new_x != parent_x)
		{
			parent_x = new_x;
			parent_y = new_y;
		}
		//resizeterm(new_y - score_size, new_x);
		//wresize(stdscr, new_y - score_size, new_x);
		wresize(info_win, score_size, new_x);
		mvwin(info_win, new_y - score_size, 0);

		screen_->updateBoardSize();

		keyHandler_->reset();
		keyHandler_->readKeys();

		if (keyHandler_->isPressed('q') || keyHandler_->isPressed('Q'))
		{
			softexit_ = false;
			exit();
		}

		scene_->update();

		screen_->clr();
		screen_->info(info_win, player->getLives(), scene_->getScore());
		scene_->display(*screen_);

		usleep(mspf_);
	}

	scene_->clear();

	if (softexit_)
		gameOver();

	endwin();
}

void	Game::gameOver(void)
{
	bool gameOverScreen = true;
	
	while (gameOverScreen)
	{
		usleep(mspf_);
		screen_->clr();
		mvwaddstr(stdscr, 10, 30, "**************GAME OVER*************");
		mvwaddstr(stdscr, 11, 30, "*********XX***************XX********");
		mvwaddstr(stdscr, 12, 30, "*******XXXXX***XXXXXXX***XXXXX******");
		mvwaddstr(stdscr, 13, 30, "**********XXXXXXXXXXXXXXXXX*********");
		mvwaddstr(stdscr, 14, 30, "************XXXXXXXXXXXXX***********");
		mvwaddstr(stdscr, 15, 30, "************XXXXXXXXXXXXX***********");
		mvwaddstr(stdscr, 16, 30, "************XX***XXX***XX***********");
		mvwaddstr(stdscr, 17, 30, "************XXXXXXXXXXXXX***********");
		mvwaddstr(stdscr, 18, 30, "*************XXXXXXXXXXX************");
		mvwaddstr(stdscr, 19, 30, "*********XXXXX**XXXXX**XXXXX********");
		mvwaddstr(stdscr, 20, 30, "*********XXXX***********XXXX********");
		mvwaddstr(stdscr, 21, 30, "***********XX***********XX**********");
		mvwaddstr(stdscr, 22, 30, "   PRESS R TO RESTART OR Q TO QUIT  ");
		keyHandler_->readKeys();
		if (keyHandler_->isPressed('r') || keyHandler_->isPressed('R'))
		{
			run();
		}
		else if (keyHandler_->isPressed('q') || keyHandler_->isPressed('Q'))
		{
			gameOverScreen = false;
		}
	}
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
