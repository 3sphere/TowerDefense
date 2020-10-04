#pragma once
#include "Actor.h"

class Tower : public Actor
{
public:
	Tower(Game* game);
	void UpdateActor(float deltaTime) override;

private:
	float mCooldown;

	const float COOLDOWN = 2.5f;
	const float ATTACK_RANGE = 50.0f;
};