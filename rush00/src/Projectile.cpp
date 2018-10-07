#include <cstdlib>

#include "Projectile.hpp"
#include "Scene.hpp"

//~--------------------------------------------------------~
// Init

void	Projectile::init(int x, int y, char c, Scene* scene)
{
	this->position_.x = x;
	this->position_.y = y;
	this->character_ = c;
	this->scene_ = scene;

	return;
}

//~--------------------------------------------------------~
// Constructors & Destructor

Projectile::Projectile(void)
{
	init(0, 0, '~', NULL);

	return;
}

Projectile::Projectile(int x, int y, char c, Scene* scene)
{
	init(x, y, c, scene);

	return;
}

Projectile::Projectile(Vec2 const& v, char c, Scene* scene)
{
	init(v.x, v.y, c, scene);

	return;
}

Projectile::Projectile(Projectile const& p)
{
	*this = p;

	return;
}

Projectile::~Projectile(void)
{
	return;
}

//~--------------------------------------------------------~
// Functions

void	Projectile::update(void)
{
	Screen screenInfo;

	if (position_.x >= screenInfo.getWidth())
	{
		scene_->removeEntity(entityIdx_);
		return;
	}

	this->movX(1);

	return;
}

void	Projectile::setEntityIdx(int n)
{
	entityIdx_ = n;

	return;
}

int		Projectile::getEntityIdx(void) const
{
	return (entityIdx_);
}
