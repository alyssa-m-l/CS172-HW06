//Name: Alyssa La Fleur
//Class CS172
//Homework 6
//Problem EX06_03: 13.5 Baby name popularity ranking
//Purpose:  A program to find the popularity of a baby name given the year and gender of the baby, for the top 1000 baby names for 2001 to 2010

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	//Declaring 
	string year = "";
	char gender = NULL;
	string name = "";
	cout << "Enter the year: " << endl;
	cin >> year;
	cout << "Enter the gender: " << endl;
	cin >> gender;
	cout << "Enter the name: " << endl;
	cin >> name;
	//contentate year with file name
	string filename = "Babynameranking" + year + ".txt";
	cout << "You are opening: " << filename << endl;
	//Declaring variables for sorting all names
	//Rank storage variables
	int rank = 0, store = 0;
	//Name storage variables
	string name_b = "", name_g = "";
	//Number children storage variables
	string numb_b = "", numb_g = "";
	//Bool value to determine if the name is contained in the file or not
	bool iscont = false;
	//Opening file
	fstream file(filename.c_str(), ios::in);
	//If file failed to open, displays so
	if (file.fail())
	{
		cout << "Failed to open file" << endl;
		cout << "Only the years 2010-2014 are accepted, please re-run program" << endl;
	}
	//For loop for sorting through all names for both genders
	for (int i = 0; i < 1000; i++)
	{
		file >> rank;
		file >> name_b;
		file >> numb_b;
		file >> name_g;
		file >> numb_g;
		//Checking all male names
		if (gender == 'M')
		{
			//IF name is found, stores rank and changes the bool value to true
			if (name_b == name)
			{
				store = rank;
				iscont = true;
			}
		}
		//Checking all female names
		if (gender == 'F')
		{
			//If name is found, stores the rank and changes the bool value to true
			if (name_g == name)
			{
				store = rank;
				iscont = true;
			}
		}
	}
	//Closing file
	file.close();
	//If the name is contained in the file, displays name, rank, and year
	if (iscont)
	{
		cout << "The name " << name << " is ranked #" << store << " in year " << year << endl;
	}
	//If the name is not contained in the file, displays name, year, and message
	else
	{
		cout << "The name " << name << " is not ranked in year " << year << endl;
	}
	return 0;
	}