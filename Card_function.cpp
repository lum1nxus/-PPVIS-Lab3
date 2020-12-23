#include "Card.h"

using namespace std;

void Card::Set_number(string& Number)
{
	this->Number = Number;
}

void Card::Set_pin_code(string& Pin)
{
	this->Pin = Pin;
}

void Card::Set_validity(string& Validity)
{
	this->Validity = Validity;
}

void Card::Set_cvv(string& Cvv)
{
	this->Cvv = Cvv;
}

void Card::Set_cipher(string& Cipher)
{
	this->Cipher = Cipher;
}

void Card::Set_money(string& money)
{
	this->money = money;
}

string Card::Get_Number()
{
	return Number;
}

string Card::Get_pin_code()
{
	return Pin;
}

string Card::Get_cipher()
{
	return Cipher;
}

string Card::Get_money()
{
	return money;
}

string Card::Get_validity()
{
	return Validity;
}