#include <vector>
#include <iostream>
#include <string>
#include "travel.h"

using namespace std;

int main()
{
	cout << "Welcome to the Travel Tracker!" << endl;

	string input = "";

	while (input != "exit")
	{
		print_commands();

		cout << "Command: ";
		cin >> input;

		try
		{
			handle_input(input);
		}
		catch (const runtime_error& ex)
		{
			cout << ex.what() << endl;
		}
	}
}
