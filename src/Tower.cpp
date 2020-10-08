#include "Tower.h"
#include "MoveComponent.h"
#include "SpriteComponent.h"
#include "Game.h"
#include <algorithm>
#include "Enemy.h"

Tower::Tower(Game* game) :
	Actor(game),
	mAttackCooldown(ATTACK_COOLDOWN)
{
	SpriteComponent* sc = new SpriteComponent(this);
	sc->SetTexture(game->GetTexture("assets/tower_single.png"));
}

void Tower::UpdateActor(float deltaTime)
{
	mAttackCooldown -= deltaTime;

	// turn to face nearest enemy
	Vector2 dir = GetGame()->GetNearestEnemy(GetPosition())->GetPosition() - GetPosition();
	float rotation = Math::Atan2(-dir.y, dir.x);
	SetRotation(rotation);

	if (mAttackCooldown <= 0.0f)
	{
		// fire projectile
		mAttackCooldown = ATTACK_COOLDOWN;
	}
}
