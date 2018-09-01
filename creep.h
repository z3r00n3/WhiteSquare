#pragma once

#include "AGK.h"

#define CREEP_IMG "media/images/WS_.png"

class Creep
{
public:
	void LoadResources();
	void Push();
	float GetX();
	float GetY();

private:
	int healthPoints_, dmgPoints_;
	float x_, y_, moveSpeed_;

	int imgID_, spriteID_;

	void Attack();
	void GetHit();
};
