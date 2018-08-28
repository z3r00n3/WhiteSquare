#pragma once

#include "character.h"

class Command
{
public:
	virtual ~Command() {};
	virtual void Execute(Character* character) = 0;
};

class IdleCommand: public Command
{
public:
	virtual void Execute(Character* character) { character->Idle(); }
};

class TurnCommand : public Command
{
public:
	virtual void Execute(Character* character) { character->Turn(); }
};

class TurnRightCommand: public Command
{
public:
	virtual void Execute(Character* character) { character->TurnRight(); }
};

class TurnLeftCommand: public Command
{
public:
	virtual void Execute(Character* character) { character->TurnLeft(); }
};

class MoveRightCommand: public Command
{
public:
	virtual void Execute(Character* character) { character->MoveRight(); }
};

class MoveLeftCommand: public Command
{
public:

	virtual void Execute(Character* character) { character->MoveLeft(); }
};

class JumpCommand: public Command
{
public:
	virtual void Execute(Character* character) { character->Jump(); }
};