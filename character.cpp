#include "character.h"

void Character::LoadResources()
{
	agk::LoadImage(ImageID::IDLE, ANIM_IDLE);
	agk::LoadImage(ImageID::MOVE, ANIM_MOVE);
	agk::LoadImage(ImageID::JUMP, ANIM_JUMP);
	//agk::LoadImage(ImageID::SLIDE,      ANIM_SLIDE);
	//agk::LoadImage(ImageID::MELEE,      ANIM_MELEE);
	//agk::LoadImage(ImageID::SHOOT,      ANIM_SHOOT);
	//agk::LoadImage(ImageID::RUN_SHOOT,  ANIM_RUN_SHOOT);
	//agk::LoadImage(ImageID::JUMP_MELEE, ANIM_JUMP_MELEE);
	//agk::LoadImage(ImageID::JUMP_SHOOT, ANIM_JUMP_SHOOT);
	//agk::LoadImage(ImageID::DEAD,       ANIM_DEAD);

	imageID_ = ImageID::IDLE;
	imageFrames_ = 1; // Temporally, while haven't animation
	//imageFrames_ = static_cast<int>(agk::GetImageWidth(imageID_)) / ANIM_FRAME_WIDTH;
	agk::CreateSprite(spriteID_, imageID_);
	agk::SetSpriteSize(spriteID_, spriteWidth_, spriteHeight_);
	agk::SetSpriteOffset(spriteID_, agk::GetSpriteWidth(spriteID_) / 2, agk::GetSpriteHeight(spriteID_));
	agk::SetSpritePositionByOffset(spriteID_, x_, y_);
	agk::SetSpriteAnimation(spriteID_, ANIM_FRAME_WIDTH, ANIM_FRAME_HEIGHT, imageFrames_);
	agk::PlaySprite(spriteID_, static_cast<float>(imageFrames_), true);

	flip_ = (direction_ == Direction::RIGHT ? false : true);
	state_ = CharacterState::IDLE;
}

void Character::Idle()
{
	if (state_ == CharacterState::MOVE || state_ == CharacterState::JUMP /*&& !agk::GetSpritePlaying(spriteID_))*/)
	{
		SwitchAnimation(ImageID::IDLE, CharacterState::IDLE, true);
	}
}

void Character::Turn()
{
	direction_ = (direction_ == Direction::RIGHT ? Direction::LEFT : Direction::RIGHT);
	flip_      = (direction_ == Direction::RIGHT ? false : true);
	agk::SetSpriteFlip(spriteID_, flip_, false);
}

void Character::TurnRight()
{
	if (direction_ == Direction::LEFT)
	{
		flip_ = false;
		direction_ = Direction::RIGHT;
		agk::SetSpriteFlip(spriteID_, flip_, false);
	}
}

void Character::TurnLeft()
{
	if (direction_ == Direction::RIGHT)
	{
		flip_ = true;
		direction_ = Direction::LEFT;
		agk::SetSpriteFlip(spriteID_, flip_, false);
	}
}

void Character::MoveRight()
{
	if (state_ == CharacterState::IDLE)
	{
		SwitchAnimation(ImageID::MOVE, CharacterState::MOVE, true);
	}

	x_++;
	agk::SetSpritePositionByOffset(spriteID_, x_, y_);
}

void Character::MoveLeft()
{
	if (state_ == CharacterState::IDLE)
	{
		SwitchAnimation(ImageID::MOVE, CharacterState::MOVE, true);
	}

	x_--;
	agk::SetSpritePositionByOffset(spriteID_, x_, y_);
}

void Character::Jump()
{
	if (state_ == CharacterState::IDLE || state_ == CharacterState::MOVE)
	{
		SwitchAnimation(ImageID::JUMP, CharacterState::JUMP, false);
	}
}

void Character::SwitchAnimation(ImageID::ImageID imageID, CharacterState::CharacterState state, bool loop)
{
	imageID_ = imageID; // I know, that I can use just imageID in following operations, 
	                    // and it seems like a nonsense, but I need to change this attribute 
	                    // for maintaining object in correct state
	imageFrames_ = static_cast<int>(agk::GetImageWidth(imageID_)) / ANIM_FRAME_WIDTH;
	agk::SetSpriteImage(spriteID_, imageID_);
	agk::SetSpriteAnimation(spriteID_, ANIM_FRAME_WIDTH, ANIM_FRAME_HEIGHT, imageFrames_);
	agk::PlaySprite(spriteID_, static_cast<float>(imageFrames_), loop);
	state_ = state;
}
