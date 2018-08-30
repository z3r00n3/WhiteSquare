#pragma once

#include "AGK.h"

#define CREEP_IMG "media/images/WS_.png"

class Creep
{
public:
	void LoadResources();

private:
	int healthPoints, dmgPoints;

	int imgID, spriteID;

	void Attack();
	void GetHit();
};