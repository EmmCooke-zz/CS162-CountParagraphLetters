/*********************************************************************
*** Author: Emmet Cooke
*** Date: 10/3/2017
*** Description: This function takes in an ofstream operator and a the
*** pointer to an int array. It asks the user for the name of the file
*** they want the count of characters output to. After this, it goes
*** through the int array and outputs the appropriate values for each 
*** letter.
**********************************************************************/
#include <fstream>

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include "output_letters.hpp"

void output_letters(std::ofstream& ofs, int* letterArray)
{
	string fileName;
	char c;
	static int paragraphCount = 1;	// Keeps track of what paragraph

	cout << "Please enter a file name for paragraph " << paragraphCount << ": ";
	getline(cin, fileName);

	ofs.open(fileName);

	for (int i = 0; i < 26; i++)	// Size was initialized as 26 in the original int array
	{								// as there are only 26 letters in English alphabet
		c = static_cast<char>(i + 97);	// Used to make correct output
		ofs << c << ": " << letterArray[i] << std::endl;
		letterArray[i] = 0;
	}
	
	ofs.close();
	paragraphCount++;
}
