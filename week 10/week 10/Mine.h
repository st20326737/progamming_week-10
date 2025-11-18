#pragma once
#include "OnScreenObject.h"

const int maxSize = 64;

class Mine : public OnScreenObject
{
private:
	char* name;
	int damage;

public:
	Mine();
	Mine(const char* name, int damage, Vector2f* position);
	~Mine();

	void setName(const char* name);
	void setDamage(int damage);

	const char* getName();
	int getDamage();

	void draw();

private:
	bool checkWordSize(char* word);
};

