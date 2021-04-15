#pragma once
#include "PlayerShip.h"
#include "Enemie.h"
#include <SFML/Graphics.hpp>
class Game
{
private :
	PlayerShip player; 

	enum state
	{
		s_uninitialized,
		s_intro,
		s_menu,
		s_info,
		s_options,
		s_level,
		s_win,
		s_lose,
		s_quit
	};

	static void run();
	static void intro();
	static void menu();
	//static void option();

public :
	Game();
	~Game();

};

