#pragma once


#include "AGK.h"
#include "character.h"
#include "input_handler.h"
#include "command.h"

#define WIN_WIDTH    1000
#define WIN_HEIGHT   600
#define WIN_POS_X    200
#define WIN_POS_Y    50
#define FULLSCREEN   false
#define ALLOW_RESIZE true
#define SYNC_RATE    60

class Game
{
public:
	Game();
	~Game();

	void Settings();
	void LoadResources();
	void GetInputHandler();

private:
	InputHandler inputHandler_; // This object is processing all user input
	Character* character_;      // Pointer to character (our hero)
	Command* command_;          // Pointer to command, that must be done in accordance with the pressed key
};