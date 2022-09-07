// C++ program to demonstrate array of strings using
// pointers character array
#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <array>

int main()
{
	const char* colour[4]
		= { "Blue", "Red", "Orange", "Yellow" };

    char colour[4][10]
        = { "Blue", "Red", "Orange", "Yellow" };

    std::string colour[4]
        = { "Blue", "Red", "Orange", "Yellow" };        

    std::vector<std::string> colour{ "Blue", "Red",
                                     "Orange","Yellow" };

     std::array<std::string, 4> colour{ "Blue", "Red",
                                       "Orange", "Yellow" };


 
    
	// Printing Strings stored in 2D array
	for (int i = 0; i < 4; i++)
		std::cout << colour[i] << "\n";

	return 0;
}
