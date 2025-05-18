#include <iostream>

void preset_pattern()
{
	/*Store a pattern inside the initialize() function
	Automatically load this pattern at startup*/
	
	/*	Initialize
	Set up the grid with default size and values
	Optionally load a pattern*/
}

void clearConsole()
{
	/*Clear the console screen (use system("cls"))
	Re-render the grid*/
	std::cout << "Clearing console..." << '\n';
	system("cls");
}

int main()
{
	bool loop = true;

	/*Define a 2D array of booleans
	Initialize it to a blank or preset pattern*/
	const int rows{ 10 };
	const int columns{ 20 };

	bool arr[rows][columns] = {};

	while (loop)
	{
		clearConsole();

		/*Loop through each pixel
		If true, display #; if false, display .
		Print row by row*/
		int arr_length = sizeof(arr);

		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				if (arr[i][j] == true)
				{
					std::cout << "#";
				}
				else if (arr[i][j] == false)
				{
					std::cout << ".";
				}
			}
			std::cout << '\n'; // Print newline after every row
		}

		/*Ask for x and y input
		Flip the corresponding pixel (toggle true/false)*/
		std::cout << "Enter an x coordinate to flip: ";
		int x{};
		std::cin >> x;

		std::cout << "Enter an y coordinate to flip: ";
		int y{};
		std::cin >> y;

		// Flip corresponding pixel
		if (arr[x][y] == true)
		{
			arr[x][y] = false;
		}
		else if (arr[x][y] == false)
		{
			arr[x][y] = true;
		}

		/***Exit Condition
		If user inputs a sentinel value (e.g. -1 -1), exit the loop*/
		if (x == -1 || y == -1)
		{
			loop = false;
		}
	}

	return 0;
}