#include <iostream>
#include "User.h"
#include <string>

using namespace std;

void createUser(User &user){
	cout << "Please enter a first name: \n";
	getline(cin, user.firstName);
	cout << "Please enter a last name: \n";
	getline(cin, user.lastName);
	cout << "Please enter an age: \n";
	cin >> user.Age;
	return;
}
void updateUser(User &user){
	string attr;
	cout << "Please enter which attribute to update (First, Last, Age): \n";
	getline(cin, attr);
	if (attr == "First") {
		cout << "Please enter the new value: \n";
		getline(cin, user.firstName);
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
void viewUser(User &user){
	cout << "Here is the current user information: \n";
	cout << "First name: " << user.firstName << "\n";
	cout << "Last name: " << user.lastName << "\n";
	cout << "Age: " << user.Age << "\n";
	cout << "Favorite Movies: \n";
	for (int i = 0; i < 4; i++) {
		cout << user.faveMovieList[i] << "\n";
	}
	return;
}
void favoritesUser(User &user){
	cout << "Please input your new 5 Favorite Movies: \n";
	cin.ignore(10000, '\n');
	for (int i = 0; i < 4; i++) {
		cin >> user.faveMovieList[i];
		cin.ignore(10000, '\n');
	}
	return;
}
void quitProgram(User &user){
	cout << "Program complete. Exiting now. \n";
	return;
}
