#pragma once
#include "MoveComponent.h"
#include "Math.h"

class NavComponent : public MoveComponent
{
public:
	NavComponent(Actor* owner, bool screenWrap = true, int updateOrder = 10);

	void TurnTo(const Vector2& position);
	//void Update(float deltaTime) override;

private:
	Vector2 mNextPoint;
};