#pragma once

#include <iostream>
#include <string>

using namespace std;

class Screen
{
public:
	virtual void Show(int h) = 0;
};

class Screen_operation : public Screen
{
public:
	void Show(int h);
};

class Screen_pin : public Screen
{
public:
	void Show(int h);
};

class Screen_transfer : public Screen
{
public:
	void Show(int h);
};

class Screen_get : public Screen
{
public:
	void Show(int h);
};

class Screen_validity : public Screen
{
public:
	void Show(int h);
};

class Screen_internet_operation : public Screen
{
public:
	void Show(int h);
};