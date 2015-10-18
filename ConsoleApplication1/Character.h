#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

using namespace std;

class Character
{
public:
	Character(string x, int y, int h);
	string getName();
	void setName(string x);
	int getLevel();
	void setLevel(int x);
	void setHealth(int x);
	int getHealth();

private:
	
	
	string name;
	int level;
	int health;


};

#endif