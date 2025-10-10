#pragma once

#ifndef ENOCKSON_TRAVEL_H
#define ENOCKSON_TRAVEL_H

#include <string>
#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

void print_commands();
void handle_input(string input);
void sortContinent(map<string, string>& M);
bool cmp(pair<string, string>& a, pair<string, string>& b);


template <typename k, typename v>
void displayItinerary(const map<k, v>& itemMap)
{
	for (const auto& pair : itemMap)
	{
		cout << "City: " << pair.first << " - Continent: " << pair.second << "\n";
	}
	cout << endl;
}



#endif
