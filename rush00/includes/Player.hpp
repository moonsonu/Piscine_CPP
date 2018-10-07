#ifndef PLAYER_H
# define PLAYER_H

# include "GameEntity.hpp"

class Player : public GameEntity
{
public:
	Player(void);
	Player(int x, int y, char c);
	Player(Player const& player);
	~Player(void);

private:
	void	init(int x, int y, char c);
};

#endif
