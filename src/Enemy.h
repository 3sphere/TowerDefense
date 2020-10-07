#pragma once
#include "Actor.h"

class CircleComponent;

class Enemy : public Actor
{
public:
	Enemy(Game* game);
	~Enemy();

	void UpdateActor(float deltaTime) override;

private:
	CircleComponent* mCircle;
};