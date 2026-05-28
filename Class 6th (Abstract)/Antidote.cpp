#include "../Program/stdafx.h"
#include "Antidote.h"



void Antidote::Use()
{
	cout << "Poison is being neutralized" << endl;
}

Antidote::~Antidote()
{
	cout << "Antidote Destroyed" << endl;
}
