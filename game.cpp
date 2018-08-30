#include "game.h"

Game::Game()
{
}

Game::~Game()
{
}

void Game::Settings()
{
	agk::SetWindowTitle("2DTD");
	agk::SetWindowSize(WIN_WIDTH, WIN_HEIGHT, FULLSCREEN);
	agk::SetWindowPosition(WIN_POS_X, WIN_POS_Y);
	agk::SetWindowAllowResize(ALLOW_RESIZE);
	agk::SetDisplayAspect(static_cast<float>(WIN_WIDTH) / WIN_HEIGHT);
	agk::SetClearColor(101, 146, 214);
	agk::UseNewDefaultFonts(true);
	agk::SetSyncRate(SYNC_RATE, 0);
}

void Game::LoadResources()
{
	tower.LoadResources();
	creep.LoadResources();
}

void Game::GetInputHandler()
{
	command_ = inputHandler_.Handler();

	if (command_)
		command_->Execute();
}

void Game::Loop()
{
	creep.Loop();
}
