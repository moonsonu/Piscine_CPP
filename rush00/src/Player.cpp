#include <curses.h>

#include "Player.hpp"
#include "Screen.hpp"
#include "Projectile.hpp"

//~--------------------------------------------------------~
// Init

void	Player::init(int x, int y, char c, int col1, int col2, KeyHandler* handler, Scene* scene)
{
	this->position_.x = x;
	this->position_.y = y;
	this->character_ = c;
	this->colors_.x = col1;
	this->colors_.y = col2;
	this->keyHandler_ = handler;
	this->scene_ = scene;
	this->hp_ = 500;
	this->score_ = 0;
	this->lives_ = 3;

	return;
}

//~--------------------------------------------------------~
// Constructors & Destructor

Player::Player(void)
{
	init(0, 0, '>', 0, 0, NULL, NULL);

	return;
}

Player::Player(int x, int y, char c, KeyHandler* handler, Scene* scene)
{
	init(x, y, c, 7, 7, handler, scene);

	return;
}

Player::Player(Player const& player)
{
	*this = player;

	return;
}

Player::~Player(void)
{
	return;
}

//~--------------------------------------------------------~
// Functions

void	Player::fire(void)
{
	Projectile* p = new Projectile(this->getX() + 1, this->getY(), '~', scene_);

	p->setEntityIdx(scene_->addEntity(p));

	return;
}

void	Player::update(void)
{
	Screen screenInfo;

	int movx = 0;
	int movy = 0;

	if (keyHandler_->isPressed(KEY_RIGHT))
		movx += 1;
	if (keyHandler_->isPressed(KEY_LEFT))
		movx -= 1;
	if (keyHandler_->isPressed(KEY_DOWN))
		movy += 1;
	if (keyHandler_->isPressed(KEY_UP))
		movy -= 1;
	if (keyHandler_->isPressed('z') || keyHandler_->isPressed('Z'))
		fire();

	if (position_.x + movx >= 0 && position_.x + movx < screenInfo.getWidth())
		this->movX(movx);
	if (position_.y + movy >= 0 && position_.y + movy < screenInfo.getHeight())
		this->movY(movy);
//	this->movX(movx);

	return;
}

void	Player::takeDamage(int damage)
{
	if (this->hp_ - damage > 0)
		this->hp_ -= damage;
	else
	{
		this->hp_ = 0;
		if (this->lives_ != 0)
			this->lives_--;
	}
}
