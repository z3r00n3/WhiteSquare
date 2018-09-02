#include "spellball.h"

void SpellBall::LoadResources()
{
	imgID_ = agk::LoadImage(SPELL_IMG);
	spriteID_ = agk::CreateSprite(imgID_);

	x_ = 7.0f;
	y_ = 47.0f;
	moveSpeedByX_ = 0.2f;
	moveSpeedByY_ = 0.2f;

	agk::SetSpriteSize(spriteID_, 10.0f, -1.0f);
	agk::SetSpriteOffset(spriteID_, agk::GetSpriteWidth(spriteID_) / 2, agk::GetSpriteHeight(spriteID_) / 2);
	agk::SetSpritePositionByOffset(spriteID_, 7.0f, 47.0f);
	agk::SetSpriteSnap(spriteID_, 1);
	agk::SetSpriteAnimation(spriteID_, 512, 512, 6);
	agk::PlaySprite(spriteID_);
}

void SpellBall::Fly(float x, float y)
{
	x_ += moveSpeedByX_;
	y_ += moveSpeedByY_;
	agk::SetSpritePositionByOffset(spriteID_, x_, y_);
}

void SpellBall::TakeHit()
{

}
