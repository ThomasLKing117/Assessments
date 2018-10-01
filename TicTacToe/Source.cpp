#include <iostream>

int main()
{
	char input = '+';
	
	std::cout << "Welcome to Tic Tac Toe, this game requires 2 palyers\n";
	std::cout << "The way this game works is you have a 3x3 grid that you play on\n";
	std::cout << "The objective of the game is to match 3 of your tokens in a row \non the gird while the opposing player is trying to do the same\n\n";
	std::cout << "Player 1 is given the tokens of x\n";
	std::cout << "Player 2 is given the tokens of o\n\n";
	
	system("pause");
	system("cls");

	std::cout << "This is an example of the board you will be playing on...\n\n";
	
	char exampleBoard[3][4] = { { '1', '2', '3', '\n' },{ '4', '5', '6', '\n' },{ '7', '8', '9', '\n' } };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << exampleBoard[i][j];
			if (!(exampleBoard[i][j] == exampleBoard[2][3]))
			{
				std::cout << " | ";
			}
		}
	}

	std::cout << "\nThe way you place a token on the board will be by typing in the cooridnates\n";
	std::cout << "The first row is 0, the second row is 1, and the third row is 2\n";
	std::cout << "The first column is 0, the second column is 1, and the third column is 2\n\n";
	std::cout << "For example if you wanted a x where 5 is you would have to type this in\n";
	std::cout << "1 1\n\n";
	system("pause");
	system("cls");

	while (input == '+')
	{
		char board[3][4] = { {' ', ' ', ' ', '\n' }, {' ', ' ', ' ', '\n' }, {' ', ' ', ' ', '\n' } };
		char playerToken;
		int row;
		int column;
		char empty = ' ';
		int turn = 0;

	
		while (turn < 9)
		{
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					std::cout << board[i][j];
					if (!(board[i][j] == board[2][3]))
					{
						std::cout << " | ";
					}
				}
			}
			std::cout << std::endl;

			if (turn % 2 == 0)
			{
				playerToken = 'x';
				std::cout << "It's x's turn\n";
				std::cin >> row;
				std::cin >> column;
				std::cout << '\n';
			}
			else
			{
				playerToken = 'o';
				std::cout << "It's o's turn\n";
				std::cin >> row;
				std::cin >> column;
				std::cout << '\n';
			}

			if (board[row][column] != empty)
			{
				std::cout << "This spot is already taken or does not exist...\n\n";
				system("pause");
				system("cls");
				continue;
			}

			board[row][column] = playerToken;

			if (board[0][0] == 'x' && board[0][1] == 'x' && board[0][2] == 'x')
			{
				system("cls");
				std::cout << "x wins!!!\n\n";
				break;
			}

			if (board[1][0] == 'x' && board[1][1] == 'x' && board[1][2] == 'x')
			{
				system("cls");
				std::cout << "x wins!!!\n\n";
				break;
			}

			if (board[2][0] == 'x' && board[2][1] == 'x' && board[2][2] == 'x')
			{
				system("cls");
				std::cout << "x wins!!!\n\n";
				break;
			}

			if (board[0][0] == 'x' && board[1][0] == 'x' && board[2][0] == 'x')
			{
				system("cls");
				std::cout << "x wins!!!\n\n";
				break;
			}

			if (board[0][1] == 'x' && board[1][1] == 'x' && board[2][1] == 'x')
			{
				system("cls");
				std::cout << "x wins!!!\n\n";
				break;
			}

			if (board[0][2] == 'x' && board[1][2] == 'x' && board[2][2] == 'x')
			{
				system("cls");
				std::cout << "x wins!!!\n\n";
				break;
			}

			if (board[0][0] == 'x' && board[1][1] == 'x' && board[2][2] == 'x')
			{
				system("cls");
				std::cout << "x wins!!!\n\n";
				break;
			}

			if (board[0][2] == 'x' && board[1][1] == 'x' && board[2][0] == 'x')
			{
				system("cls");
				std::cout << "x wins!!!\n\n";
				break;
			}

			if (board[0][0] == 'o' && board[0][1] == 'o' && board[0][2] == 'o')
			{
				system("cls");
				std::cout << "o wins!!!\n\n";
				break;
			}

			if (board[1][0] == 'o' && board[1][1] == 'o' && board[1][2] == 'o')
			{
				system("cls");
				std::cout << "o wins!!!\n\n";
				break;
			}

			if (board[2][0] == 'o' && board[2][1] == 'o' && board[2][2] == 'o')
			{
				system("cls");
				std::cout << "o wins!!!\n\n";
				break;
			}

			if (board[0][0] == 'o' && board[1][0] == 'o' && board[2][0] == 'o')
			{
				system("cls");
				std::cout << "o wins!!!\n\n";
				break;
			}

			if (board[0][1] == 'o' && board[1][1] == 'o' && board[2][1] == 'o')
			{
				system("cls");
				std::cout << "o wins!!!\n\n";
				break;
			}

			if (board[0][2] == 'o' && board[1][2] == 'o' && board[2][2] == 'o')
			{
				system("cls");
				std::cout << "o wins!!!\n\n";
				break;
			}

			if (board[0][0] == 'o' && board[1][1] == 'o' && board[2][2] == 'o')
			{
				system("cls");
				std::cout << "o wins!!!\n\n";
				break;
			}

			if (board[0][2] == 'o' && board[1][1] == 'o' && board[2][0] == 'o')
			{
				system("cls");
				std::cout << "o wins!!!\n\n";
				break;
			}

			system("pause");
			system("cls");
			if (turn == 8)
			{
				for (int i = 0; i < 3; i++)
				{
					for (int j = 0; j < 4; j++)
					{
						std::cout << board[i][j];
						if (!(board[i][j] == board[2][3]))
						{
							std::cout << " | ";
						}
					}
				}
				std::cout << std::endl;
			}

			turn++;

			if (turn == 9)
			{
				std::cout << "You tied\n";
			}

			continue;
		}

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				std::cout << board[i][j];
				if (!(board[i][j] == board[2][3]))
				{
					std::cout << " | ";
				}
			}
		}
		std::cout << std::endl;

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