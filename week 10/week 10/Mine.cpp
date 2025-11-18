#include "Mine.h"
#include <string.h>

#include <cstdlib>
#include <iostream>
using std::cout;
using std::endl;

Mine::Mine() : OnScreenObject()
{
	damage = 0;
	name = nullptr;
}

Mine::Mine(const char* name, int damage, Vector2f* position) : OnScreenObject(position)
{
	setDamage(damage);
	if (checkWordSize((char*)name)) {
		setName(name);
	}
	else {
		setName(nullptr);
	}
	
}

bool Mine::checkWordSize(char* word)
{
	const int maxSize = 64;
	int length = 0;
	while (word[length] != '\0')
	{
		length++;
	}
	return length < maxSize;
}

Mine::~Mine()
{
}

void Mine::setName(const char* name)
{
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
}
void Mine::setDamage(int damage)
{
	this->damage = damage;
}
void Mine::draw()
{
	//Draw code here.
	cout << "DEBUG: Drawing mine" << endl;
}