#pragma once
#include <vector>
#include <fstream>
#include <string>
#include "User.h"
#include "Card.h"
#include "Encryption.h"
#include "Card_base.h"
#include "Session.h"

using namespace std;

ifstream f;

extern vector<Card_base> database;

void Entry_card(vector<Card> &card)
{
	string line;
	f.open("Card_database.txt");
	while (!f.eof())
	{
		Card n;
		f >> line;
		n.Set_number(line);
		f >> line;
		n.Set_cipher(line);
		f >> line;
		n.Set_pin_code(line);
		f >> line;
		n.Set_validity(line);
		f >> line;
		n.Set_cvv(line);
		card.push_back(n);
	}
	f.close();
}

void Entry_owner(vector<User>& user)
{
	string line;
	f.open("User_database.txt");
	while (!f.eof())
	{
		User n;
		Name name;
		f >> line;
		name.first = line;
		f >> line;
		name.second = line;
		n.Set_name(&name);
		f >> line;
		n.Set_age(line);
		f >> line;
		n.Set_cell(line);
		user.push_back(n);
	}
	f.close();
}


void Make_data_base(vector<Card>& card,vector<User>& user)
{

}

