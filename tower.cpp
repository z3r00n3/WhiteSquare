#include "tower.h"

void Tower::LoadResources()
{
	imgID = agk::LoadImage(TOWER_IMG);
	spriteID = agk::CreateSprite(imgID);

	agk::SetSpriteSize(spriteID, -1.0f, 70.0f);
	agk::SetSpriteOffset(spriteID, 0.0f, agk::GetSpriteHeight(spriteID));
	agk::SetSpritePositionByOffset(spriteID, 0.0f, 100.0f);
}

void Tower::Attack()
{
}

void Tower::GetHit()
{
}
