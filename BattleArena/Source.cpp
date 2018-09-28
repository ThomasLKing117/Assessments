#include "Stack.h"
#include "Hero.h"
#include "Game.h"

int main()
{
	char input = '+';

	std::cout << "Hello user\n" << "The only thing you need to do in order to run this program is to \nsimply do what the program tells you to do when prompted\n";
	system("pause");
	system("cls");

	while (input == '+')
	{
		srand(time(NULL));
		Game* g = new Game();

		Hero* hero1 = new Hero;
		hero1->GetName("Iron Man");

		Hero* hero2 = new Hero;
		hero2->GetName("Captain America");

		Stack* OpposingTeam1 = new Stack;
		OpposingTeam1->push(hero1);

		Stack* OppsoingTeam2 = new Stack;
		OppsoingTeam2->push(hero2);

		while (hero1->IsAlive() && hero2->IsAlive())
			g->Battle(*hero1, *hero2);

		system("Pause");
		system("cls");

		std::cout << "Game Over" << std::endl;

		system("pause");
		system("cls");

		std::cout << "Enter (+) to play again" << std::endl;
		std::cout << "Enter (-) to end the game" << std::endl;
		std::cin >> input;

		system("cls");
	}

	while (input == '-')
	{
		std::cout << "Thanks for playing!!!" << std::endl;
		system("Pause");
		return 0;
	}
}
