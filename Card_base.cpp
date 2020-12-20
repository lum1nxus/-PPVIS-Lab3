#include "Card_base.h"

using namespace std;

void Card_base::Set_user(User& user)
{
	this->user = user;
}

void Card_base::Set_card(Card& card)
{
	this->card = card;
}

Card& Card_base::Get_card()
{
	return card;
}

User& Card_base::Get_user()
{
	return user;
}

Card_base::Card_base(Card& card, User& user)
{
	Set_user(user);
	Set_card(card);
}