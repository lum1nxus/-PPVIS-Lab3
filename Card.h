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
public:
	void Set_number(string& Number);
	void Set_cipher(string& Cipher);
	void Set_pin_code(string& Pin);
	void Set_validity(string& Validity);
	void Set_cvv(string& Cvv);
	string Get_Number();
	string Get_pin_code();
	string Get_cipher();
};

