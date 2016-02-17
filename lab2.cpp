#include <iostream>
#include <fstream>
#include "User.h"


int main() {
	User user;
	string command;

	cout << "Please enter a command (Create, Update, View, Favorites, or Quit): \n";
	cin >> command;

	while (command != "Quit") {
		if (command == "Create") {
			// Execute createUser() function
			createUser(User.user);
		}
		else if (command == "Update") {
				// Execute updateUser() function
			updateUser(User.user);
		}
		else if (command == "View") {
				// Execute viewUser() function
			viewUser(User.user);
		}
		else if (command == "Favorites") {
			// Execute favoritesUser() function
			favoritesUser(User.user);
		}
		else {
			cout << "Unrecognized command. What would you like to run? \n";
			cout << "Please enter a command (Create, Update, View, Favorites, or Quit): \n";
			cin >> command;
		}	

	}
	quitProgram(User.user);

	return 0;
}