#pragma once

#include "AGK.h"

#define SPELL_IMG "media/images/fireball.png"

class SpellBall
{
public:
	void LoadResources();
	void Fly();

private:
	int dmgPoints_;
	float x_, y_, moveSpeed_;

	int imgID_, spriteID_;

	void TakeHit();
};
