#pragma once
#include "User.h"
#include "Card.h"
#include <vector>
#include <iostream>

using namespace std;

class Card_base
{
	User user;
	Card card;
public:
	Card_base(Card& card, User& user);
	void Set_user(User &user);
	void Set_card(Card &card);
	Card& Get_card();
	User& Get_user();
};