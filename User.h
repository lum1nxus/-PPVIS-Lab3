#pragma once

#include <iostream>

using namespace std;

typedef pair<string, string> Name;

class User
{
	string age;
	Name name;
	string cell;
public:
	void Set_name(Name *name);
	void Set_age(string &age);
	void Set_cell(string& cell);
	Name& Get_name();
};


