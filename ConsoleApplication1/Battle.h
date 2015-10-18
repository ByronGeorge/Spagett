#ifndef BATTLE_H
#define BATTLE_H

#include "Character.h"
#include <string>
using namespace std;

class Battle
{
public:
	Battle();
	void setDamage(int x);
	int getDamage();
	void setHeal(int x);
	int getHeal();
	void runBattle(Character player, Battle battle);
	
private:

	int damage;
	int heal;
};

#endif