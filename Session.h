#pragma once
#include <iostream>
#include <string>
#include "Screen.h"

using namespace std;

class Session
{
	int Find_owner();
public:
	Session();
	void Next(Screen&screen,int h);
};