#ifndef PROJECTILE_H
# define PROJECTILE_H

# include "GameEntity.hpp"

class Projectile : public GameEntity
{
public:
	Projectile(int x, int y, char c, Scene* scene);
	Projectile(Vec2 const& v, char c, Scene* scene);
	~Projectile(void);

	void	update(void);

	void	setEntityIdx(int n);
	int		getEntityIdx(void) const;

private:
	Projectile(void);
	Projectile(Projectile const& p);

	int	entityIdx_;

	void init(int x, int y, char c, Scene* scene);
};

#endif
