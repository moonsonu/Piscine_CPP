#ifndef SCENE_H
# define SCENE_H

# include "GameEntity.hpp"
# include "Screen.hpp"

class Player;

class Scene
{
public:
	Scene(void);
	~Scene(void);

	GameEntity*	getEntity(int idx) const;
	int			getEntityCount(void) const;

	int			addEntity(GameEntity* entity);
	void		removeEntity(int idx);

	void		update(void);
	void		display(Screen const& screen);

private:
	Scene(Scene const& scene);

	Scene& operator=(Scene const& scene);

	void init(void);

	static const int maxEntities_ = 512;

	//Player*	player_;
	GameEntity** entities_;
};

#endif
