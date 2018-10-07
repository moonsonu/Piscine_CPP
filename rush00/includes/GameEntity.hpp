#ifndef GAMEENTITY_H
# define GAMEENTITY_H

# include "Vec2.hpp"

class GameEntity
{
public:
	GameEntity(void);
	GameEntity(GameEntity const& entity);
	~GameEntity(void);

	GameEntity& operator=(GameEntity const& entity);

	int		getX(void) const;
	int		getY(void) const;
	Vec2	getPosition(void) const;
	char	getCharacter(void) const;

	void	setX(int n);
	void	setY(int n);
	void	setPosition(Vec2 const& v);

	void	movX(int n);
	void	movY(int n);

	void	incPosition(Vec2 const& v);
	void	decPosition(Vec2 const& v);

protected:
	Vec2 position_;

	char character_;
};

#endif
