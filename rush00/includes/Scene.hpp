#ifndef SCENE_H
# define SCENE_H

# include "Player.hpp"

class Scene
{
public:
	Scene(void);
	~Scene(void);


private:
	Scene(Scene const& scene);

	Scene& Scene::operator=(Scene const& scene);

	Player*	player_;
};

#endif
