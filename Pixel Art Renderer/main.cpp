#include <iostream>

void smiley_face(bool arr[][20]); // Forward declaration

void preset_pattern(bool arr[][20])
{
	/*Store a pattern inside the initialize() function
	Automatically load this pattern at startup*/
	
	/*	Initialize
	Set up the grid with default size and values
	Optionally load a pattern*/
	std::cout << "Pick a preset pattern: " << '\n';
	std::cout << "\t1) Smiley face" << '\n';
	int choice{};
	std::cin >> choice;

	// Smiley face
	if (choice == 1)
	{
		smiley_face(arr);
	}
}

void smiley_face(bool arr[][20])
{
	// First row
	for (int i = 0; i < 1; ++i)
	{
		for (int j = 5; j < 15; ++j)
		{
			arr[i][j] = true;
		}
	}

	// Second row
	for (int i = 1; i < 2; ++i)
	{
		for (int j = 3; j < 17; ++j)
		{
			arr[i][j] = true;
		}
	}

	// Third row
	for (int i = 2; i < 3; ++i)
	{
		for (int j = 1; j < 19; ++j)
		{
			arr[i][j] = true;
		}
	}

	// 4, 5, 6, 7 row
	for (int i = 3; i < 7; ++i)
	{
		for (int j = 0; j < 20; ++j)
		{
			arr[i][j] = true;
		}
	}

	// Eighth row
	for (int i = 7; i < 8; ++i)
	{
		for (int j = 1; j < 19; ++j)
		{
			arr[i][j] = true;
		}
		for (int j = 6; j < 14; ++j)
		{
			arr[i][j] = false;
		}
	}

	// Ninth row
	for (int i = 8; i < 9; ++i)
	{
		for (int j = 3; j < 17; ++j)
		{
			arr[i][j] = true;
		}
	}

	// Tenth row
	for (int i = 9; i < 10; ++i)
	{
		for (int j = 5; j < 15; ++j)
		{
			arr[i][j] = true;
		}
	}

	// Eyes
	for (int i = 3; i < 4; ++i)
	{
		for (int j = 4; j < 7; ++j)
		{
			arr[i][j] = false;
		}
		for (int j = 13; j < 16; ++j)
		{
			arr[i][j] = false;
		}
	}

	// Mouth corners
	for (int i = 6; i < 7; ++i)
	{
		for (int j = 5; j < 6; ++j)
		{
			arr[i][j] = false;
		}
		for (int j = 14; j < 15; ++j)
		{
			arr[i][j] = false;
		}
	}
}

static void clearConsole()
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

	// Asks user if they'd like to start from a preset pattern.
	std::cout << "Welcome to Pixel Art Renderer!\n";
	std::cout << "To close out of the program, enter - 1 as a coordinate value.\n"; 
	std::cout << "Would you like to choose a preset pattern ? (Y / N).\n";
	char choice{};
	std::cin >> choice;
	if (choice == 'Y' || choice == 'y')
	{
		preset_pattern(arr);
	}

	// Move onto main loop.
	while (loop)
	{
		clearConsole();

		/*Loop through each pixel
		If true, display #; if false, display .
		Print row by row*/
		int arr_length = sizeof(arr);

		for (int i = 0; i < rows; ++i)
		{
			for (int j = 0; j < columns; ++j)
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
			std::cout << "Closing program..." << '\n';
			loop = false;
		}
		else if (std::cin.fail())
		{
			std::cout << "Closing program..." << '\n';
			loop = false;
		}
	}

	return 0;
}