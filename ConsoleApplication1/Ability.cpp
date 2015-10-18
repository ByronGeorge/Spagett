#include "stdafx.h"
#include "Ability.h"
#include <time.h>

int Ability::randomNum() {
	return rand();
}

void Ability::attack(Character& attacker, Character& defender) {
	int damage = randomNum() % 3 + attacker.getLevel();
	defender.setHealth(defender.getHealth() - damage);
}

void Ability::heal(Character& character) {
	int heal = randomNum() % 2 + character.getLevel();
	character.setHealth(character.getHealth() + heal);
}