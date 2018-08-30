#pragma once

#include "AGK.h"

#define CREEP_IMG "media/images/WS_.png"

class Creep
{
public:
	void LoadResources();
	void Loop();

private:
	int healthPoints, dmgPoints;
	float x, y, moveSpeed;

	int imgID, spriteID;

	void Push();
	void Attack();
	void GetHit();
};