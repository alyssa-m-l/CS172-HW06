//Name: Alyssa La Fleur
//Class CS 172
//Homework 6
//Problem EX06_02: 13.2 Count Characters
//Purpose:  A program which prompts the user to enter a file name, then displays the number of characters in that file

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	//Declaring name variable, asking user to enter name, giving test name in file already
	string name;
	cout << "Enter file name (ex: Exercise13_1.txt):" << endl;
	cin >> name;
	//Opening file from entered name for input
	fstream input_file(name.c_str(), ios::in);
	//If opening the file fails, displays so
	if (input_file.fail())
	{
		cout << "Failed to open file" << endl;
		return 0;
	}
	//Otherwise, counts the characters in the file which are not spaces
	else
	{
		//Declaring variables for counting
		int char_count = 0;
		char char_to_count;
		//While not end of file, continue to count the characters
		while (input_file >> char_to_count)
		{
			//If the character is not a space, counts the character
			if (char_to_count != ' ')
			{
				char_count++;
			}
		}
		//Displays number of characters in the file
		cout << "There are " << char_count << " characters in the file." << endl;
		//Closes file
		input_file.close();
		return 0;
	}
}