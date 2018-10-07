#include "GameEntity.hpp"

//~-----------------------------------------------------------~
// Constructors & Destructor

GameEntity::GameEntity(void)
{
	return;
}

GameEntity::GameEntity(GameEntity const& entity)
{
	*this = entity;

	return;
}

GameEntity::~GameEntity(void)
{
	return;
}

//~--------------------------------------------------------~
// Operators

GameEntity& GameEntity::operator=(GameEntity const& entity)
{
	this->position_ = entity.getPosition();

	return (*this);
}

//~--------------------------------------------------------~
// Gets

int		GameEntity::getX(void) const
{
	return (this->position_.x);
}

int		GameEntity::getY(void) const
{
	return (this->position_.y);
}

Vec2	GameEntity::getPosition(void) const
{
	return (this->position_);
}

char	GameEntity::getCharacter(void) const
{
	return (this->character_);
}

//~--------------------------------------------------------~
// Sets

void	GameEntity::setX(int n)
{
	this->position_.x = n;

	return;
}

void	GameEntity::setY(int n)
{
	this->position_.y = n;

	return;
}

void	GameEntity::setPosition(Vec2 const& v)
{
	this->position_ = v;

	return;
}

//~--------------------------------------------------------~
// Incs

void	GameEntity::movX(int n)
{
	this->position_.x += n;

	return;
}

void	GameEntity::movY(int n)
{
	this->position_.y += n;

	return;
}

void	GameEntity::incPosition(Vec2 const& v)
{
	this->position_ = this->position_ + v;

	return;
}

void	GameEntity::decPosition(Vec2 const& v)
{
	this->position_ = this->position_ - v;

	return;
}

//~--------------------------------------------------------~
// Functions

void	GameEntity::update(void)
{
	return;
}

void	GameEntity::display(Screen const& screen) const
{
	screen.draw(position_, character_);

	return;
}
