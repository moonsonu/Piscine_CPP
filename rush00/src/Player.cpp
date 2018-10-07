#include "Player.hpp"

//~--------------------------------------------------------~
// Init

void	Player::init(int x, int y, char c)
{
	this->position_.x = x;
	this->position_.y = y;
	this->character_ = c;

	return;
}

//~--------------------------------------------------------~
// Constructors & Destructor

Player::Player(void)
{
	init(0, 0, '>');

	return;
}

Player::Player(int x, int y, char c)
{
	init(x, y, c);

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
