#include "Material.h"

void Material::Describe()
{
	cout << "재료입니다." << endl;
}

void Material::Promote()
{
	cout << "재료가 강화되었습니다." << endl;
}
Material::~Material()
{
	cout << "Material Destroyed\n" << endl;
}
