#include "stdafx.h"
#include "Character.h"
#include <iostream>
#include <string>

using namespace std;

Character::Character(string x, int y, int h)
{
	setName(x);
	setLevel(y);
	setHealth(h);
}


void Character::setName(string x)
{
	name = x;
}

string Character::getName()
{
	return name;
}

void Character::setLevel(int x)
{
	level = x;
}
int Character::getLevel()
{
	return level;
}

void Character::setHealth(int x)
{
	health = x;
}

int Character::getHealth()
{
	return health;
}