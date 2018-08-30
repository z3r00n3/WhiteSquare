#include "spellball.h"

void SpellBall::LoadResources()
{
	imgID = agk::LoadImage(SPELL_IMG);
	spriteID = agk::CreateSprite(imgID);

	x = 7.0f;
	y = 47.0f;
	moveSpeed = 0.2f;

	agk::SetSpriteSize(spriteID, 10.0f, -1.0f);
	agk::SetSpriteOffset(spriteID, agk::GetSpriteWidth(spriteID) / 2, agk::GetSpriteHeight(spriteID) / 2);
	agk::SetSpritePositionByOffset(spriteID, 7.0f, 47.0f);
	agk::SetSpriteSnap(spriteID, 1);
	agk::SetSpriteAnimation(spriteID, 512, 512, 6);
	agk::PlaySprite(spriteID);
}

void SpellBall::Fly()
{
	x += moveSpeed;
	agk::SetSpritePositionByOffset(spriteID, x, y);
}

void SpellBall::TakeHit()
{

}
