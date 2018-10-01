#include <iostream>
#include <cstdlib> 
#include <ctime> 

int main()
{
	// These are the variables im starting with
	int guess;
	int userNum;
	char input;
	char start;
	// This is asking if you want to play
	std::cout << "Press (+) to play game!" << std::endl;
	std::cout << "Press (-) to leave..." << std::endl;
	std::cin >> start;
	// This is the game its self
	while (start == '+')
	{
		system("cls");
		// Here I am telling the user about the game and how it works
		{
			std::cout << "Hello user, I want you to think of a number!" << std::endl;
			std::cout << "The number must be between the numbers 1 - 100..." << std::endl;
			std::cout << "I will then have the computer guess that number..." << std::endl;
			std::cout << "Enter your number..." << std::endl;
			std::cin >> userNum;

			system("pause");
			system("cls");
		}
		//Here I am telling the computer to generate a random number
		{
			srand(time(NULL));
			guess = rand() % 100 + 1;
		}
		//This is where the user tells the computer whether or not its guess was to high, low, or equal to the users guess
		{
			std::cout << "Your number is, " << userNum << std::endl;
			std::cout << "Computer guess, " << guess << std::endl;
			std::cout << "Is the guess eqaul to(=), less than(<), or greater than(>), your number?" << std::endl;
			std::cin >> input;

			while (input != '=')
			{
				if (input == '<')
				{
					guess = rand() % userNum;
					std::cout << "Your number is, " << userNum << std::endl;
					std::cout << "Computer guess, " << guess << std::endl;
					std::cout << "Is the guess eqaul to(=), less than(<), or greater than(>), your number?" << std::endl;
					std::cin >> input;
					system("cls");
				}
				else if (input == '>')
				{
					guess = rand() % userNum;
					std::cout << "Your number is, " << userNum << std::endl;
					std::cout << "Computer guess, " << guess << std::endl;
					std::cout << "Is the guess eqaul to(=), less than(<), or greater than(>), your number?" << std::endl;
					std::cin >> input;
					system("cls");
				}
				else // This happens if the respones given by the user is invalid
				{
					std::cout << "Invlaid response" << std::endl;
					system("pause");
					return 0;
				}
			}
			system("cls");
		}
		// This is the end of the game
		{
			if (input == '=')
			{
				std::cout << "The computer has guessed the number..." << std::endl;
				std::cout << "The game is now over" << std::endl;
				system("pause");
				system("cls");
			}
			// This ask the user is they want to paly again or quit
			std::cout << "Do you want to play again?" << std::endl;
			std::cout << "I yes press (+) if no press (-)" << std::endl;
			std::cin >> input;

			system("cls");
		}
	}
	std::cout << "Thanks for playing!!!" << std::endl;
	system("Pause");
	// This ends the game 
	while (start == '-')
	{
		return 0;
	}
}