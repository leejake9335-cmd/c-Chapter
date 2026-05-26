#include "Platinum.h"

Platinum::Platinum()
{
	name = "백금";
	weight = 15.0f;
	
}
void Platinum::Describe()
{
	cout << "Name : " << name << endl;
	cout << "Weight : " << weight << "g" << endl;

}
void Platinum::Promote()
{
	cout << "Annie" << endl;
	cout << "Eternals Capsuke\n" << endl;
}

Platinum::~Platinum()
{
	cout << "Platinum Destroyed" << endl;
}
