#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "travel.h"

using namespace std;

struct TravelTracker
{
        string continent = "";
        string city = "";
};

void print_commands()
{
	cout << "COMMAND MENU" << endl;
	cout << "--------------------------\n" <<
		"insert - add a new city\n" <<
		"view - view entry history\n" <<
		"total - view the total amount of entries\n" <<
		"exit - exit the program\n\n";
}

void handle_input(string input)
{
	map<string, string> itinerary;

	if (input == "insert")
	{
		string city;
		string continent;

		bool isValidContinent = false;

		while (!isValidContinent == true)
		{
			cout << "Enter a city: ";
			cin >> city;
			cout << "Enter a continent: ";
			cin.ignore();
			getline(cin, continent);

			if (continent == "asia" || continent == "australia" || continent == "north america" || continent == "south america" || continent == "europe" || continent == "africa" || continent == "antarctica")
			{
				itinerary[city] = city;
				itinerary[continent] = continent;

				cout << "Your entry has been saved!\n\n";
				isValidContinent = true;
			}
			else
			{
				cout << "Invalid continent. Please try again.\n\n";
				isValidContinent = false;
			}
		}
	}
	if (input == "view")
	{
		displayItinerary(itinerary);
	}
	else if (input == "total")
	{
		
	}
	else if (input == "exit")
	{
		
	}
}
