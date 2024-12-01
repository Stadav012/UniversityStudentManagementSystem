#pragma once
#include <iostream>
#include <string>
#include "Users.h"
using namespace std;

class Users
{
public:
	int user_id;
	string fname;
	string lname;
	string email;
	string password;

public:

	void users(const int& id, const string& fName, const string& lName,
		const string& mail, const string& pwd) {

		user_id = id;
		fname = fName;
		lname = lName;
		email = mail;
		password = mail;
	};


	void login();
	void logout();




};

