/*********************************************************************
*** Program name: Lab2
*** Author: Emmet Cooke
*** Date: 10/3/2017
*** Description: This program asks the user to enter a valid file name
*** for a text file. If valid, it opens it and sends it to the 
*** count_letters function, along with a pointer to an int array. From
*** count_letters, the number of appearances of a-z in the text file are
*** tallied and then output through the output_letters function.
**********************************************************************/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <fstream>
using std::ifstream;

#include <string>
using std::string;

#include "count_letters.hpp"

int main()
{
	int * letterValues = new int[26] {0};	// Sets the 26 values to 0
	string fileName;

	cout << "Please enter a file name: ";
	getline(cin, fileName);

	ifstream fileIn(fileName);
	
	if (fileIn)								// Only runs if the file exists
	{										// Otherwise, the program closes
		count_letters(fileIn, letterValues);
	}
	else
	{
		cout << "Please enter the correct file name." << endl;
	}

	delete[] letterValues;
	return 0;
}