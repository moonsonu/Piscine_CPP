#include <cstdlib>
#include <curses.h>

#include "Scene.hpp"

//~--------------------------------------------------------~
// Init

void	Scene::init(void)
{
	entities_	 = new GameEntity* [maxEntities_];

	for (int i = 0; i < maxEntities_; ++i)
		entities_[i] = NULL;

	return;
}

//~--------------------------------------------------------~
// Constructors & Destructor

Scene::Scene(void)
{
	init();

	return;
}

Scene::Scene(Scene const& scene)
{
	init();
	*this = scene;

	return;
}

Scene::~Scene(void)
{
	delete [] entities_;

	return;
}

//~--------------------------------------------------------~
// Gets

GameEntity*	Scene::getEntity(int idx) const
{
	if (idx >= maxEntities_ || idx < 0)
		return (NULL);

	return (entities_[idx]);
}

int			Scene::getEntityCount(void) const
{
	return (maxEntities_);
}

//~--------------------------------------------------------~
// Operators

Scene&	Scene::operator=(Scene const& scene)
{
	for (int i = 0; i < maxEntities_; ++i)
		entities_[i] = scene.getEntity(i);

	return (*this);
}

//~--------------------------------------------------------~
// Functions

int	Scene::addEntity(GameEntity* entity)
{
	int entIdx = -1;

	for (int i = 0; i < maxEntities_; ++i)
	{
		if (entities_[i] == NULL)
		{
			entities_[i] = entity;
			entIdx = i;
			break;
		}
	}

	return (entIdx);
}

void	Scene::removeEntity(int idx)
{
	if (idx >= maxEntities_ || idx < 0)
		return;

	if (entities_[idx] != NULL)
		delete entities_[idx];

	entities_[idx] = NULL;

	return;
}

void	Scene::update(void)
{
	for (int i = 0; i < maxEntities_; ++i)
	{
		if (entities_[i] != NULL)
			entities_[i]->update();
	}

	return;
}

void	Scene::display(Screen const& screen)
{
	for (int i = 0; i < maxEntities_; ++i)
	{
		if (entities_[i] != NULL)
			entities_[i]->display(screen);
	}

	return;
}
