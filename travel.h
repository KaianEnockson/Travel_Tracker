#pragma once

#ifndef ENOCKSON_TRAVEL_H
#define ENOCKSON_TRAVEL_H

#include <string>
#include <iostream>
#include <map>

using namespace std;

struct TravelItinerary
{
	string country = "";
	string city = "";
};

void print_commands();
void handle_input(string input);

template <typename k, typename v>
void displayItinerary(const map<k, v>& itemMap)
{
	for (const auto& pair : itemMap)
	{
		cout << pair.first << "(" << pair.second << ")\n";
	}
	cout << endl;
}



#endif
