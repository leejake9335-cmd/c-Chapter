#pragma once
#include "Material.h"
class Emerald : public Material
{
protected:
	
	float Transparency;

public:
	Emerald();

	void Describe();
	
	virtual void Promote() override;

};

