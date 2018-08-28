#include "input_handler.h"

InputHandler::InputHandler()
{
	idle_      = new IdleCommand();
	turn_      = new TurnCommand();
	turnLeft_  = new TurnLeftCommand();
	turnRight_ = new TurnRightCommand();
	moveLeft_  = new MoveLeftCommand();
	moveRight_ = new MoveRightCommand();
	space_     = new JumpCommand();
}

InputHandler::~InputHandler()
{
	delete idle_;
	delete turn_;
	delete turnLeft_;
	delete turnRight_;
	delete moveLeft_;
	delete moveRight_;
	delete space_;
}

Command* InputHandler::Handler()
{
	if (agk::GetRawKeyReleased(KEY_LEFT) || agk::GetRawKeyReleased(KEY_RIGHT)) return idle_;
	//if (agk::GetRawKeyPressed(KEY_LEFT)  || agk::GetRawKeyPressed(KEY_RIGHT))  return turn_;
	if (agk::GetRawKeyPressed(KEY_LEFT))  return turnLeft_;
	if (agk::GetRawKeyPressed(KEY_RIGHT)) return turnRight_;
	if (agk::GetRawKeyState(KEY_LEFT))    return moveLeft_;
	if (agk::GetRawKeyState(KEY_RIGHT))   return moveRight_;
	if (agk::GetRawKeyPressed(KEY_SPACE)) return space_;

	return NULL;
}
