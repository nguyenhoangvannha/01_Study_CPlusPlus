#pragma once

class ChaMe
{
public:
	void testBienPrivate(){
		bienPrivate = 2;
		bienProtected = 3;
	}
public:
	int bienPublic;
protected:
	int bienProtected;
private:
	int bienPrivate;
};
