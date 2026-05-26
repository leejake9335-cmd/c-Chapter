#pragma once
#include "Material.h"
class Diamond : public Material
{
protected:
	
	float hardness;

public:

	Diamond();
	
	void Describe();

	virtual void Promote() override;
	
	virtual ~Diamond();
	

};

