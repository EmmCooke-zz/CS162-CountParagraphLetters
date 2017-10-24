/*********************************************************************
*** Author: Emmet Cooke
*** Date: 10/3/2017
*** Description: This function takes in an ifstream operator and the 
*** pointer to an int array. It goes through the referenced text file
*** and tallies up how many of each letter exists within the text file.
*** Once it's done this, it passes it to the output_letters function.
**********************************************************************/
#include <fstream>
#include <iostream>
using std::ofstream;

#include <string>
using std::string;

#include "output_letters.hpp"
#include "count_letters.hpp"

void count_letters(std::ifstream& ifs, int* letterArray)
{
	string str;
	ofstream ofs;
	int asciiValue;

	while (getline(ifs, str))			// Gets the line up until the new line
	{
		if (str.length() > 1)
		{
			for (unsigned int i = 0; i < str.length(); i++)
			{								// This converts the input string
				str[i] = tolower(str[i]);	// to lowercase letters
			}

			for (char c : str)
			{
				// validate that it's a-z
				asciiValue = static_cast<int>(c);
				if (asciiValue > 96 && asciiValue < 123)	// a-z are 97 to 122
				{
					letterArray[asciiValue - 97]++;	// increases the appropriate
				}									// position within the letterArray
			}										// 0 = a, 1 = b, 2 = c, etc.

			output_letters(ofs, letterArray);
		}
		
	}
	
}
