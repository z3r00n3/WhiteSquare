#include "tower.h"

void Tower::LoadResources()
{
	imgID_ = agk::LoadImage(TOWER_IMG);
	spriteID_ = agk::CreateSprite(imgID_);

	agk::SetSpriteSize(spriteID_, -1.0f, 70.0f);
	agk::SetSpriteOffset(spriteID_, 0.0f, agk::GetSpriteHeight(spriteID_));
	agk::SetSpritePositionByOffset(spriteID_, 0.0f, 100.0f);
}

void Tower::Attack()
{
}

void Tower::GetHit()
{
}
