#include "stdafx.h"
#include "Battle.h"
#include <cstdlib>
#include <time.h>
#include "Character.h"
#include <iostream>
#include "Ability.h"


Battle::Battle(Character player, Character enemy)
{
	loop(player, enemy);
}

void Battle::loop(Character player,Character enemy) {
	cout << "Player health: " << player.getHealth() << " Enemy health: " << enemy.getHealth() << endl;

	while (true) {
		string playerChoice;
		cin >> playerChoice;

		if (playerChoice.compare("a") == 0) {
			Ability::attack(player, enemy);
		}
		else if (playerChoice.compare("h") == 0) {
			Ability::heal(player);
		}
		else {
			cout << "Invalid!";
		}
		cout << "Player health: " << player.getHealth() << " Enemy health: " << enemy.getHealth() << endl;
		if ((player.getHealth() <= 0) || (enemy.getHealth() <= 0)) {
			break;
		}
		Ability::attack(enemy, player);
		cout << "Player health: " << player.getHealth() << " Enemy health: " << enemy.getHealth() << endl;
		if ((player.getHealth() <= 0) || (enemy.getHealth() <= 0)) {
			break;
		}
	}
}
