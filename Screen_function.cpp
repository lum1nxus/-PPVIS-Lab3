#include "Screen.h"
#include "Card_base.h"

using namespace std;

extern vector<Card_base> database;

void Screen_operation::Show(int h)
{
	Screen* screen;
	int x;
	bool attempts = false;
	while (!attempts)
	{
		try
		{
			cout << "Choose operation: 1: Get money \t 2: Send money \t 3: Exit" << endl;
			cin >> x;
			if (x < 0 || x > 3)
			{
				throw "Your value should be between 0 - 3, try again";
			}
			attempts = true;
		}
		catch(const char* str)
		{
			cout << str << endl;
		}
	}
	switch (x)
	{
	case 1: 
		screen = new Screen_get;
		screen->Show(h);
		break;
	case 2:
		screen = new Screen_transfer;
		screen->Show(h);
		break;
	case 3:
		exit(0);
		break;
	}
	screen = new Screen_operation;
	screen->Show(h);
}

void Screen_pin::Show(int h)
{
	string pin;
	bool atempts = false;
	int a = 0;
	while (!atempts)
	{
		try 
		{
			cout << "Enter your PIN code: " << endl;
			cin >> pin;
			if (pin.size() != 4)
			{
				throw ++a;
			}
			else if (pin != database[h].Get_card().Get_pin_code())
			{
				throw ++a;
			}
			cout << "Right PIN" << endl;
			atempts = true;
		}
		catch (int a)
		{
			if (a >= 3)
			{
				cout << "You have exceeded the number of attempts";
				exit(0);
			}
			cout << "Wrong PIN, it should consists of 4 digits" << endl << "You have " << (3 - a) << " attempt(s) left" << endl;
		}
	}
}

void Screen_transfer::Show(int h)
{
	int x;
	string y;
	try
	{
		cout << "Your current balance is " << database[h].Get_card().Get_money() << "$" << endl << "Enter ammount of money to transfer: " << endl;
		cin >> x;
		if (x > stoi(database[h].Get_card().Get_money()))
		{
			throw "You entered a larger ammount than you have";
		}
		if (x < 0)
		{
			throw "You entered negative ammount of money";
		}
		cout << "Enter number of credit card to transfer money" << endl;
		cin >> y;
		for (int i = 0; i < database.size(); i++)
		{
			if (database[i].Get_card().Get_Number() == y)
			{
				string str = to_string(stoi(database[h].Get_card().Get_money()) - x);
				cout << "Current balance is " << str << "$" << endl;
				database[h].Get_card().Set_money(str);
				string str1 = to_string(stoi(database[i].Get_card().Get_money()) + x);
				database[i].Get_card().Set_money(str1);
				cout << "Operation succeeded, getting back to the main menu... " << endl;
			}
		}
	}
	catch (const char* str)
	{
		cout << str << endl;
		Screen* screen = new Screen_transfer;
		screen->Show(h);
	}
}

void Screen_get::Show(int h)
{
	int x;
	try
	{
		cout << "Your current balance is " << database[h].Get_card().Get_money() << "$" << endl << "Enter ammount of money to withdraw: " << endl;
		cin >> x;
		if (x > stoi(database[h].Get_card().Get_money()))
		{
			throw "You entered a larger ammount than you have";
		}
		if (x < 0)
		{
			throw "You entered negative ammount of money";
		}
	}
	catch (const char* str)
	{
		cout << str << endl;
		Screen* screen = new Screen_get;
		screen->Show(h);
	}
	string str = to_string(stoi(database[h].Get_card().Get_money()) - x);
	cout << "Current balance is " << str << "$" << endl;
	database[h].Get_card().Set_money(str);
	cout << "Operation succeeded, getting back to the main menu... " << endl;
}
