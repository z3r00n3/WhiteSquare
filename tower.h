#pragma once

#include "AGK.h"

#define TOWER_IMG "media/images/Tower.png"

class Tower
{
public:
	void LoadResources();

private:
	int healthPoints, dmgPoints;
	
	int imgID, spriteID;

	void Attack();
	void GetHit();
};
