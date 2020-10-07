#include "Tower.h"
#include "MoveComponent.h"
#include "SpriteComponent.h"
#include "Game.h"

Tower::Tower(Game* game) :
	Actor(game),
	mCooldown(COOLDOWN)
{
	SpriteComponent* sc = new SpriteComponent(this);
	sc->SetTexture(game->GetTexture("assets/tower_single.png"));
}

void Tower::UpdateActor(float deltaTime)
{
	mCooldown -= deltaTime;
	if (mCooldown <= 0.0f)
	{

	}
}
