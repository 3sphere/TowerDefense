#include "NavComponent.h"
#include "Actor.h"

NavComponent::NavComponent(Actor* owner, bool screenWrap, int updateOrder) :
	MoveComponent(owner, screenWrap, updateOrder), 
	mNextPoint()
{

}

void NavComponent::TurnTo(const Vector2& position)
{
	Vector2 dir = position - mOwner->GetPosition();
	float rotation = Math::Atan2(-dir.y, dir.x);
	mOwner->SetRotation(rotation);
}


