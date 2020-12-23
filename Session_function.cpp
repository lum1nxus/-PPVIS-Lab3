#include "Session.h"
#include "Entry.h"
#include "Screen.h"

using namespace std;

extern vector<Card_base> database;

bool check_card(string number, int& a);

Session::Session()
{
	vector<User> user;
	vector<Card> card;
	Entry_card(card);
	Entry_owner(user);
	Make_data_base(card, user);
	int h = Find_owner();
	Screen* screen = new Screen_pin;
	screen->Show(h);
	screen = new Screen_operation;
	screen->Show(h);
}

int Session::Find_owner()
{
	int h = 0;
	try
	{
		string number;
		cout << "Enter number of card using - between digits, for example: 5465-6545-6547-6567" << endl;
		cin >> number;
		if (!check_card(number, h))
		{
			throw "Not correct, try again";
		}
	}
	catch (const char* str)
	{
		cout << str << endl;
		return Find_owner();
	}
	return h;
}

bool check_card(string number, int& a)
{
	for (int i = 4; i < number.size(); i += 5)
	{
		if (number[i] != '-')
		{
			return 0;
		}
	}
	while (a < database.size())
	{
		if (number == database[a].Get_card().Get_Number())
		{
			return 1;
		}
		a++;
	}
	return 0;
}



