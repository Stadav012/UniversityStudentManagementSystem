#pragma once
#include <iostream>
#include <string>
#include <msclr/marshal_cppstd.h>
using namespace std;

class Users
{
public:
	int user_id;
	string fname;
	string lname;
	string email;
	string password;

	Users(int id, System::String^ fName, System::String^ lName, System::String^ mail, System::String^ pwd) {
		user_id = id;
		fname = msclr::interop::marshal_as<std::string>(fName);
		lname = msclr::interop::marshal_as<std::string>(lName);
		email = msclr::interop::marshal_as<std::string>(mail);
		password = msclr::interop::marshal_as<std::string>(pwd);
	}

	// Methods
public:
	void login();
	void logout();
};
