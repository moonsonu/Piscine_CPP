#include <curses.h>

#include "Screen.hpp"

//~--------------------------------------------------------~
// Init

void	Screen::init(void)
{
	initscr();
	noecho();
	curs_set(0);
	score_size_ = 5;
	getmaxyx(stdscr, height_, width_);

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
	Screen::width_ = screen.getWidth();
	Screen::height_ = screen.getHeight();

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
	return (this->height_ - this->score_size_);
}

//~--------------------------------------------------------~
// Functions

void	Screen::clr(void)
{
	clear();

	return;
}

void	Screen::draw(int x, int y, char c) const
{
	mvaddch(y, x, c);
}

void	Screen::draw(Vec2 const& v, char c) const
{
	mvaddch(v.y, v.x, c);
}

void	Screen::draw(int x, int y, char c, int col1, int col2) const
{
	init_pair(1, col1, col2);

	attron(COLOR_PAIR(1));
	draw(x, y, c);
	attroff(COLOR_PAIR(1));
}

void	Screen::draw(Vec2 const& v, char c, int col1, int col2) const
{
	init_pair(1, col1, col2);

	attron(COLOR_PAIR(1));
	draw(v, c);
	attroff(COLOR_PAIR(1));
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
		mvwaddstr(info_win, 1, 15, " <3 <3 <3 ");
	else if (lives == 2)
		mvwaddstr(info_win, 1, 15, " <3 <3 ");
	else if (lives == 1)
		mvwaddstr(info_win, 1, 15, " <3 ");
	return ;
}

