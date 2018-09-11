#include <iostream>
#include <string.h>

int main()
{
	char input = '+';
	

	while (input == '+')
	{

		
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