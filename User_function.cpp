#include "User.h"

using namespace std;

void User::Set_name(Name* name)
{
	this->name = *name;
}

void User::Set_age(string& age)
{
	this->age = age;
}

void User::Set_cell(string& cell)
{
	this->cell = cell;
}

Name& User::Get_name()
{
	return name;
}

string User::Get_cell()
{
	return cell;
}
