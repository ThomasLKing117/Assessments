#include <iostream>
#include <string.h>

int main()
{
	char input = '+';
	

	while (input == '+')
	{
		char exampleBoard[3][4] = { { '1', '2', '3', '\n' },{ '4', '5', '6', '\n' },{ '7', '8', '9', '\n' } };
		char board[3][4] = { {' ', ' ', ' ', '\n' }, {' ', ' ', ' ', '\n' }, {' ', ' ', ' ', '\n' } };
		char playerChoice;

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				std::cout << exampleBoard[i][j];
				if (!(exampleBoard[i][j] == exampleBoard[2][3]))
				{
					std::cout << " ~ ";
				}
			}
		}

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