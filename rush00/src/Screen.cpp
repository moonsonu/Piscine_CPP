#include <curses.h>

#include "Screen.hpp"

//~--------------------------------------------------------~
// Init

void	Screen::init(void)
{
	initscr();
	noecho();
	curs_set(0);

	getmaxyx(stdscr, this->height_, this->width_);

	return;
}

//~--------------------------------------------------------~
// Constructors & Destructor

Screen::Screen(void)
{
	init();

	return;
}

Screen::Screen(Screen const& screen)
{
	*this = screen;

	return;
}

Screen::~Screen(void)
{
	return;
}

//~--------------------------------------------------------~
// Operators

Screen& Screen::operator=(Screen const& screen)
{
	this->width_ = screen.getWidth();
	this->height_ = screen.getHeight();

	return (*this);
}

//~--------------------------------------------------------~
// Gets

int	Screen::getWidth(void) const
{
	return (this->width_);
}

int	Screen::getHeight(void) const
{
	return (this->height_);
}

//~--------------------------------------------------------~
// Functions

void	Screen::clr(void)
{
	clear();

	return;
}

void	Screen::draw(int x, int y, char c)
{
	mvaddch(y, x, c);
}

void	Screen::draw(Vec2 const& v, char c)
{
	mvaddch(v.y, v.x, c);
}

void	Screen::updateBoardSize(void)
{
	getmaxyx(stdscr, this->height_, this->width_);

	return;
}

void	Screen::info(WINDOW *info_win, int lives, int score)
{
	wrefresh(info_win);
	//wclear(info_win);
	box(info_win, '*', '*');
	mvwaddstr(info_win, 1, 2, "LIFE: ");
	mvwaddstr(info_win, 3, 2, "SCORE: ");
	mvwprintw(info_win, 3, 15, "%d", score);
	if (lives == 3)
		mvwaddstr(info_win, 1, 15, " ❤︎  ❤︎  ❤︎ ");
	else if (lives == 2)
		mvwaddstr(info_win, 1, 15, " ❤︎  ❤︎ ");
	else if (lives == 1)
		mvwaddstr(info_win, 1, 15, " ❤︎ ");
	return ;
}
