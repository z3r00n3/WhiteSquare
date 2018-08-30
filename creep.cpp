#include "creep.h"

void Creep::LoadResources()
{
	imgID = agk::LoadImage(CREEP_IMG);
	spriteID = agk::CreateSprite(imgID);

	agk::SetSpriteSize(spriteID, -1.0f, 15.0f);
	agk::SetSpriteOffset(spriteID, 0.0f, agk::GetSpriteHeight(spriteID));
	x = 100.0f - agk::GetSpriteWidth(spriteID);
	y = 100.0f;
	agk::SetSpritePositionByOffset(spriteID, x, y);
	moveSpeed = 0.02f;
	agk::SetSpriteSnap(spriteID, 1);
}

void Creep::Loop()
{
	Push();
}

void Creep::Push()
{
	x -= moveSpeed;
	agk::SetSpritePositionByOffset(spriteID, x, y);
}

void Creep::Attack()
{
}

void Creep::GetHit()
{
}
