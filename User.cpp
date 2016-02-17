#include <iostream>
#include "User.h"
#include <string>

using namespace std;

void createUser(User &user){
	
	cout << "Please enter a first name: \n"; // Asks for user input for a first name
	getline(cin, user.firstName); // stores the user input
	cout << "Please enter a last name: \n"; // Asks for user input for a last name	
	getline(cin, user.lastName);
	cout << "Please enter an age: \n"; // Asks for user input for an age	
	cin >> user.Age;
	return;
}
void updateUser(User &user){ // Allows user to update pieces of information
	string attr;
	cout << "Please enter which attribute to update (First, Last, Age): \n";
	getline(cin, attr);
	if (attr == "First") { // checks the user command
		cout << "Please enter the new value: \n";
		getline(cin, user.firstName); // stores value
		return;
	}
	else if (attr == "Last") {
		cout << "Please enter the new value: \n";
		getline(cin, user.lastName);
		return;
	}
	else if (attr == "Age") {
		cout << "Please enter the new value: \n";
		cin >> user.Age;
		return;
	}
	else {
		cout << "Failed to update user. Invalid inputs! \n";
		return;
	}
}
void viewUser(User &user){ //Allows to view all the information of the user.
	cout << "Here is the current user information: \n";
	cout << "First name: " << user.firstName << "\n";
	cout << "Last name: " << user.lastName << "\n";
	cout << "Age: " << user.Age << "\n";
	cout << "Favorite Movies: \n";
	for (int i = 0; i < 4; i++) {
		cout << user.faveMovieList[i] << "\n"; // Show each favorite movie in the array.
	}
	return;
}
void favoritesUser(User &user){
	cout << "Please input your new 5 Favorite Movies: \n";
	cin.ignore(10000, '\n'); // Ignore the \n character for cin buffer. Can cause for loop to skip.
	for (int i = 0; i < 4; i++) {
		cin >> user.faveMovieList[i]; //For every input, up to 5, store movie name into element of array
		cin.ignore(10000, '\n');
	}
	return;
}
void quitProgram(User &user){ // Allows user to quit the program.
	cout << "Program complete. Exiting now. \n";
	return;
}
