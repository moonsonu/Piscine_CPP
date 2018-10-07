#ifndef SCREEN_H
# define SCREEN_H

# include "Vec2.hpp"

class Screen
{
public:
	Screen(void);
	~Screen(void);

	int		getWidth(void) const;
	int		getHeight(void) const;

	void	clr(void);
	void	draw(int x, int y, char c);
	void	draw(Vec2 const& v, char c);

	void	updateBoardSize(void);
	void	info(WINDOW *info_win, int lives, int score);
private:
	Screen(Screen const& screen);

	void	init(void);

	Screen& operator=(Screen const& screen);

	int	width_;
	int	height_;
};

#endif
