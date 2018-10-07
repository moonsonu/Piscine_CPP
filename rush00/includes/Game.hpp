#ifndef GAME_H
# define GAME_H

# include <curses.h>
# include <string>

# include "Screen.hpp"
# include "KeyHandler.hpp"

class Game
{
public:
	Game(void);
	Game(int fps);
	~Game(void);

	void	run(void);
	void	exit(void);

	int	getFPS(void) const;
	int	getRunTime(void) const;

private:
	Game(Game const& game);
	Game& operator=(Game const& game);

	void	init(void);

	int			time_;
	bool		running_;
	const int	 fps_;
	unsigned int mspf_;
	int			lives_;
	int			score_;
	//int			hp_;
	Screen*		screen_;
	KeyHandler*	keyHandler_;
};

#endif
