#include "creep.h"

void Creep::LoadResources()
{
	imgID = agk::LoadImage(CREEP_IMG);
	spriteID = agk::CreateSprite(imgID);

	agk::SetSpriteSize(spriteID, -1.0f, 15.0f);
	agk::SetSpriteOffset(spriteID, 0.0f, agk::GetSpriteHeight(spriteID));
	agk::SetSpritePositionByOffset(spriteID, 100.0f - agk::GetSpriteWidth(spriteID), 100.0f);
}

void Creep::Attack()
{
}

void Creep::GetHit()
{
}
