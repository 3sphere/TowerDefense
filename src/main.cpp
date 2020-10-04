#include "Game.h"

int main(int argc, char** argv)
{
	Game aeroplane;

	if (aeroplane.Initialise())
	{
		aeroplane.RunLoop();
	}

	aeroplane.Shutdown();

	return 0;
}