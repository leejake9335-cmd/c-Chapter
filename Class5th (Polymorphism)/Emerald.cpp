#include "Emerald.h"
Emerald::Emerald()
{
	name = "에메랄드";
	weight = 27.5f;
	Transparency = 0.8f;
}	


void Emerald::Describe()
{
	cout << "Name : " << name << endl;
	cout << "Weight : " << weight << "g" << endl;
	cout << "Transparency : " << Transparency << endl;
}

void Emerald::Promote()
{
	cout << "에메랄드가 강화되었습니다." << endl;
}

Emerald::~Emerald()
{
	cout << "Emerald Destroyed" << endl;
}

