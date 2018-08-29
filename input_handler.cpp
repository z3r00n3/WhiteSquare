#include "input_handler.h"

InputHandler::InputHandler()
{
	someCommand_ = new SomeCommand();
}

InputHandler::~InputHandler()
{
	delete someCommand_;
}

Command* InputHandler::Handler()
{

	return NULL;
}
