#ifndef PLAYER_H
# define PLAYER_H

# include "KeyHandler.hpp"
# include "GameEntity.hpp"
# include "Scene.hpp"

class Player : public GameEntity
{
public:
	Player(int x, int y, char c, KeyHandler* handler, Scene* scene);
	~Player(void);

	void	update(void);
	int		lives_;
	int		score_;
	int		hp_;

	void	takeDamage(int damage);
private:
	Player(void);
	Player(Player const& player);

	void	init(int x, int y, char c, int col1, int col2, KeyHandler* handler, Scene* scene);

	void	fire(void);

	KeyHandler* keyHandler_;
};

#endif
