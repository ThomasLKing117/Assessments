#include <iostream>
#include <string.h>

int main()
{
	char input = '+';
	char board[3][3] = { { ' ', ' ', ' '}, { ' ', ' ', ' '}, {' ', ' ', ' '} };
	char piece;
	int choicePlace = 0;
	int c = 0;
	int r = 0;

	while (input == '+')
	{

		std::cout << "This is Tic Tac Toe, use the number pad on your keyboard as a board, Player 1 is x's player 2 is o's" << std::endl;
		system("pause");
		system("cls");

		for (int i = 0; i < 9; i++)
		{
			//Switches turns

			piece = (i % 2 == 0) ? 'x' : 'o';
			std::cout << piece << "'s turn" << std::endl;

			while (i < 9)
			{
				std::cin >> choicePlace;

				//This puts the pieces where they are supposed to be

				c = (choicePlace - 1) / 3;
				r = ((choicePlace + 2) % 3);

				//Prevents reapeat placements

				if (board[c][r] != ' ')
				{
					std::cout << "This space is already being used" << std::endl;
				}

				else
				{
					break;
				}
			}

			c = (choicePlace - 1) / 3;
			r = ((choicePlace + 2) % 3);
			board[c][r] = piece;

			//This prints the table
			for (int j = 2; j >= 0; j--)
			{
				for (int k = 0; k <= 2; k++)
				{
					std::cout << "|~ " << board[j][k] << " ~|";

					if (6 % (k + 3) == 1)
					{
						std::cout << std::endl;
					}
				}
			}
			//This checks for all the win circumstances

			if (board[0][0] == board[1][0] && board[2][0] == board[1][0] && board[0][0] != ' ')
			{
				std::cout << board[0][0] << " wins!!!" << std::endl;
				break;
			}

			else if (board[0][0] == board[0][1] && board[0][1] == board[0][2] && board[0][0] != ' ')
			{
				std::cout << board[0][0] << " wins!!!" << std::endl;
				break;
			}

			else if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
			{
				std::cout << board[0][0] << " wins!!!" << std::endl;
				break;
			}

			else if (board[0][1] == board[1][1] && board[1][1] == board[2][1] && board[0][1] != ' ')
			{
				std::cout << board[0][1] << " wins!!!" << std::endl;
				break;
			}

			else if (board[0][2] == board[1][2] && board[1][2] == board[2][2] && board[0][2] != ' ')
			{
				std::cout << board[0][2] << " wins!!!" << std::endl;
				break;
			}

			else if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
			{
				std::cout << board[0][2] << " wins!!!" << std::endl;
				break;
			}

			else if (board[1][0] == board[1][1] && board[1][1] == board[1][2] && board[1][0] != ' ')
			{
				std::cout << board[1][0] << " wins!!!" << std::endl;
				break;
			}

			else if (board[2][0] == board[2][1] && board[2][1] == board[2][2] && board[2][0] != ' ')
			{
				std::cout << board[2][0] << " wins!!!" << std::endl;
				break;
			}

			//Repeats loop
			if (i != 8)
			{
				system("pause");
				system("cls");
				continue;
			}

			else
			{
				std::cout << "You have ended in a tie" << std::endl;
				break;
			}
		}
		system("pause");
		system("cls");

		memset(&board, ' ', sizeof(board));

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