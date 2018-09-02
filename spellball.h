#pragma once

#include "AGK.h"

#define SPELL_IMG "media/images/fireball.png"

class SpellBall
{
public:
	void LoadResources();
	void Fly(float x, float y);

private:
	int dmgPoints_;
	float x_, y_, moveSpeedByX_, moveSpeedByY_;

	int imgID_, spriteID_;

	void TakeHit();
};
