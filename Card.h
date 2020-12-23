#pragma once

#include <iostream>

using namespace std;

class Card
{
	string Number;
	string Cipher;
	string Pin;
	string Validity;
	string Cvv;
	string money;
public:
	void Set_number(string& Number);
	void Set_cipher(string& Cipher);
	void Set_pin_code(string& Pin);
	void Set_validity(string& Validity);
	void Set_cvv(string& Cvv);
	void Set_money(string& money);
	string Get_Number();
	string Get_pin_code();
	string Get_cipher();
	string Get_money();
};

