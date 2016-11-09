//Name: Alyssa La Fleur
//Class CS172
//Homework #6
//Problem EX06_01
//Purpose:  Write a program which creates a text file if it does not exist.  If it does exist, append data to it, with the contents of the file consisting of 100 random integers sepearted by one space  wtih text I/O

#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int main()
{
	//Initializing random number generation
	srand(time (0));
	//Opening file to write numbers in
	fstream file;
	if (file.fail())
	{
		cout << "Failed" << endl;
	}
	if (file.fail())
	{
		file.open("Exercise13_1.txt");
		if (file.fail())
		{
			cout << "File does not exist, creating file" << endl;
		}
		//Generating 100 random numbers to store in file
		int store = 0;
		for (int i = 0; i < 100; i++)
		{
			store = rand() % 100000;
			if (i == 0)
			{
				file << store;
			}
			else
			{
				file << " " << store;
			}
		}
		file.close();
		return 0;
	}
	else
	{
		cout << "File exists" << endl;
		//If the file does exist, opens for output and appending data to end of file
		file.open("Exercise13_1.txt", ios::out | ios::app);
		//Appends integers
		int store = 0;
		for (int j = 0; j < 100; j++)
		{
			store = rand() % 10;
			if (j == 0)
			{
				file << store;
			}
			else
			{
				//Adds required spacing
				file << " " << store;
			}
		}
		//Closes file
		file.close();
		return 0;
	}
}