#ifndef ABILITY_H
#define ABILITY_H

#include "Character.h"

class Ability {
	public:
		static void attack(Character& player, Character& enemy);
		static void heal(Character& character);
		static int randomNum();
	private:



};



#endif