#include "Platinum.h"

Platinum::Platinum()
{
	name = "백금";
	weight = 15.0f;
	Transparency = 0.5f;
}
void Platinum::Promote()
{ 
cout << "Name : " << name << endl;
cout << "Weight : " << weight << "g" << endl;
cout << "Transparency : " << Transparency << endl;
}
void Platinum::Promote()
{
	cout << "플래티넘이 강화되었습니다." << endl;
}
