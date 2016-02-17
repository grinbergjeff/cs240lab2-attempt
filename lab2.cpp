#include <iostream>
#include <fstream>
#include "User.h"
#include <string>


int main() {
	User user;
	string command;

	cout << "Please enter a command (Create, Update, View, Favorites, or Quit): \n";
	cin >> command;
	cin.ignore(1000, '\n');

	while (command != "Quit") {
		if (command == "Create") {
			// Execute createUser() function
			createUser(user);
		}
		else if (command == "Update") {
				// Execute updateUser() function
			updateUser(user);
		}
		else if (command == "View") {
				// Execute viewUser() function
			viewUser(user);
		}
		else if (command == "Favorites") {
			// Execute favoritesUser() function
			favoritesUser(user);
		}
		else {
			cout << "INVALID COMMAND \n";
		}

	cout << "\nPlease enter a command (Create, Update, View, Favorites, or Quit): \n";
	cin >> command;
	cin.ignore(1000, '\n');	

	}
	quitProgram(user);

	return 0;
}