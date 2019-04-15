#pragma once
#include "Automat.h"
class UI
{
public:
	Automat a;
	void setUp();
	void Menu(int value);
	int getCommand();
	UI();
	~UI();
};

