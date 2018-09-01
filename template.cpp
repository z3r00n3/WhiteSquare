// Includes
#include "template.h"

// Namespace
using namespace AGK;

app App;

app::app()
{

}

void app::Begin()
{
	game_.Settings();
	game_.LoadResources();
}

int app::Loop()
{
	agk::Print(agk::ScreenFPS());
	agk::Print(agk::GetSeconds());
	//agk::PrintC(game.creep.x);
	//agk::PrintC(":");
	//agk::Print(game.creep.y);

	game_.GetInputHandler();
	game_.Loop();

	agk::Sync();

	return 0; // return 1 to close app
}

void app::End()
{
	agk::DeleteAllSprites();
	agk::DeleteAllImages();
	//agk::DeleteAllText();
}
