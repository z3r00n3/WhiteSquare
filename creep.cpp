#include "creep.h"

void Creep::LoadResources()
{
	imgID_ = agk::LoadImage(CREEP_IMG);
	spriteID_ = agk::CreateSprite(imgID_);

	agk::SetSpriteSize(spriteID_, -1.0f, 15.0f);

	x_ = 100.0f - agk::GetSpriteWidth(spriteID_);
	y_ = 100.0f;
	moveSpeed_ = 0.02f;
	
	agk::SetSpriteOffset(spriteID_, 0.0f, agk::GetSpriteHeight(spriteID_));
	agk::SetSpritePositionByOffset(spriteID_, x_, y_);
	agk::SetSpriteSnap(spriteID_, 1);
}

void Creep::Push()
{
	x_ -= moveSpeed_;
	agk::SetSpritePositionByOffset(spriteID_, x_, y_);
}

float Creep::GetX()
{
	return x_;
}

float Creep::GetY()
{
	return y_;
}

void Creep::Attack()
{
}

void Creep::GetHit()
{
}
