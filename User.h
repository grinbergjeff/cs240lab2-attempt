#ifndef USER_H
#define USER_H

using namespace std;


class User {
	public:
		string lastName;
		string firstName;
		int Age;
		string faveMovieList[5];
};


//Function Declarations:
		void createUser(User &user);
		void updateUser(User &user);
		void viewUser(User &user);
		void favoritesUser(User &user);
		void quitProgram(User &user);

#endif