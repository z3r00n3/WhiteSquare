#pragma once

#include "AGK.h"

#define TOWER_IMG "media/images/Tower.png"

class Tower
{
public:
	void LoadResources();

private:
	int healthPoints_, dmgPoints_;
	
	int imgID_, spriteID_;

	void Attack();
	void GetHit();
};
