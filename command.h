#pragma once

class Command
{
public:
	virtual ~Command() {};
	virtual void Execute() = 0;
};

class SomeCommand: public Command
{
public:
	virtual void Execute() { ; }
};
