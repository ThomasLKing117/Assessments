#include "Game.h"

Hero Game::Battle(Hero &hero1, Hero &hero2)
{
	hero1.PrintName();
	std::cout << " " << hero1.GetHealth() << " " << hero1.GetPower() << std::endl;
	hero2.PrintName();
	std::cout << " " << hero2.GetHealth() << " " << hero2.GetPower() << std::endl;

	while (hero1.IsAlive() && hero2.IsAlive())
	{
		std::cout << std::endl;
		system("pause");
		std::cout << std::endl;
		if (hero1.IsAlive())
		{
			hero1.Fight(&hero2);
		}
		if (hero2.IsAlive())
		{
			hero2.Fight(&hero1);
		}
		hero1.PrintName();
		std::cout << " " << hero1.GetHealth() << std::endl;
		hero2.PrintName();
		std::cout << " " << hero2.GetHealth() << std::endl;
	}
	if (hero1.IsAlive())
	{
		std::cout << std::endl;
		hero1.PrintName();
		std::cout << " Wins!!!" << std::endl;
		std::cout << "Winning the game for team 1\n";
		std::cout << std::endl;
		return hero1;
	}
	if (hero2.IsAlive())
	{
		std::cout << std::endl;
		hero2.PrintName();
		std::cout << " Wins!!!" << std::endl;
		std::cout << "Winning the game for team 2\n";
		std::cout << std::endl;
		return hero2;
	}
	return Hero();
}