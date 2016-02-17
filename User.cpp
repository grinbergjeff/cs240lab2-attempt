#include <iostream>

using namespace std;

void createUser(User &user){
	//User user;
	cout << "Please enter a first name: \n";
	getline(cin, user.firstName);
	cout << "Please enter a last name: \n";
	getline(cin, user.lastName);
	cout << "Please enter an age: \n";
	getline(cin, user.Age);

	return 0;
}
void updateUser(User &user){
	string attr;
	cout << "Please enter which attribute to update (First, Last, Age): \n";
	getline(cin, attr);
	if (attr == "First") {
		cout << "Please enter the new value: \n";
		getline(cin, user.firstName);
		return 0;
	}
	else if (attr == "Last") {
		cout << "Please enter the new value: \n";
		getline(cin, user.lastName);
		return 0;
	}
	else if (attr == "Age") {
		cout << "Please enter the new value: \n";
		getline(cin, user.Age);
		return 0;
	}
	else {
		cout << "Failed to update user. Invalid inputs! \n";
		return 0;
	}
}
void viewUser(User &user){
	cout << "Here is the current user information: \n";
	cout << "First name: " << user.firstName << "\n";
	cout << "Last name: " << user.lastName << "\n";
	cout << "Age: " << user.Age << "\n";
	int i;
	cout << "Favorite Movies: \n";
	for (int i = 0; i > 5; i++) {
		cout << user.faveMovieList[i] << "\n";
	}
	return 0;
}
void favoritesUser(User &user){
	cout << " Please input your new 5 Favorite Movies: \n";
	getline(cin, user.faveMovieList[0]);
	getline(cin, user.faveMovieList[1]);
	getline(cin, user.faveMovieList[2]);
	getline(cin, user.faveMovieList[3]);
	getline(cin, user.faveMovieList[4]);
	return 0;
}
void quitProgram(User &user){
	cout << "Program complete. Exiting now. \n";
	return 0;
}
