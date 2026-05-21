#include "Diamond.h"

Diamond::Diamond()
{
	name = "다이아몬드";
	weight = 0.2f;
	hardness = 10.0f;
}
void Diamond::Describe()
{
	cout << "Name : " << name << endl;
	cout << "Weight : " << weight << "g" << endl;
	cout << "Hardness : " << hardness << endl;
}