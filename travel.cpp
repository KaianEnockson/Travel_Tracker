#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include "travel.h"

using namespace std;

map<string, string> itinerary;
vector<pair<const string, string>> iVector(itinerary.begin(), itinerary.end());

void print_commands()
{
	cout << "COMMAND MENU" << endl;
	cout << "--------------------------\n" <<
		"insert - add a new city\n" <<
		"view - view entry history\n" <<
		"total - view the total amount of entries\n" <<
		"sort - sort the entries by continent\n" <<
		"exit - exit the program\n\n";
}

void handle_input(string input)
{
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
				itinerary[city] = continent;

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
		if (itinerary.empty())
		{
			cout << "There are no inserts. Please add a travel insertion.\n\n";
		}
		else
		{
			displayItinerary(itinerary);
		}
	}
	if (input == "total")
	{
		cout << "There are " << itinerary.size() << " Entries in your itinerary.\n\n";
	}
	if (input == "sort")
	{
		sortContinent(itinerary);
	}
	if (input == "exit")
	{
		cout << "Goodbye!\n\n" << endl;
	}
}

bool cmp(pair<string, string>& a,
	pair<string, string>& b)
{
	return a.second > b.second;
}

void sortContinent(map<string, string>& M)
{
	vector<pair<string, string> > A;

	for (auto& it : M)
	{
		A.push_back(it);
	}

	sort(A.begin(), A.end(), cmp);

	for (auto& it : A)
	{
		cout << "City: " << it.first << " - Continent: " << it.second << endl;
	}
}
