#pragma once
#include "Material.h"
class Platinum : public Material
{
protected:
	float Transparency;
public:
	Platinum();
	virtual void Promote() override;
};

