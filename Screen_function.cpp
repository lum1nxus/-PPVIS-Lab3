#include "Screen.h"

void Screen_operation::Show()
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
		screen->Show();
		break;
	case 2:
		screen = new Screen_transfer;
		screen->Show();
		break;
	case 3:
		exit(0);
		break;
	}
	screen = new Screen_operation;
	screen->Show();
}

void Screen_pin::Show()
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
			else if (a == 1)
			{
				throw ++a;
			}
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

void Screen_transfer::Show()
{

}

void Screen_get::Show()
{

}

/*
void Screen_get::Show()
{
	double money;
	bool atempts = false;
	while (!atempts)
	{
		try
		{
			cout << << "Enter ammount of money to to withdraw:" << endl;
			cin >> money;
			if (money > )
			{
				throw "You dont have such ammount of money in your cell";
			}
		}
		catch (const )
		{

		}
	}
}
*/



