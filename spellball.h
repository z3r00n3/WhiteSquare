#pragma once

#include "AGK.h"

#define SPELL_IMG "media/images/fireball.png"

class SpellBall
{
public:
	void LoadResources();
	void Fly();

private:
	int dmgPoints;
	float x, y, moveSpeed;

	int imgID, spriteID;

	void TakeHit();
};
