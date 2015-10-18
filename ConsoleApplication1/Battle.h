#ifndef BATTLE_H
#define BATTLE_H

#include "Character.h"
#include <string>
using namespace std;

class Battle
{
public:
	Battle(Character player, Character enemy);
	void loop(Character player, Character enemy);
	
private:

};

#endif