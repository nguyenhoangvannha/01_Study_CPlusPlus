#pragma once
#include "ChaMe.h"

class ConCai: public ChaMe
{
	void testProtected(){
		bienPublic = 1;
		bienProtected = 2;
	}
};
