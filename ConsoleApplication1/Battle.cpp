#include "stdafx.h"
#include "Battle.h"
#include <cstdlib>
#include <time.h>
#include "Character.h"
#include <iostream>



Battle::Battle()
{
}


void Battle::setDamage(int x)
{
	

	damage = x + (rand() % 3);
}

int Battle::getDamage()
{
	return damage;
}

void Battle::setHeal(int x)
{
	

	heal = x + (rand() % 2);
}

int Battle::getHeal()
{
	return heal;
}

void Battle::runBattle(Character player, Battle battle)
{
	Character enemy("Enemy", 1, 20);

	while (true)
	{

		srand(time(NULL));


		battle.setDamage(player.getLevel());

		cout << "player damage: " << battle.getDamage() << "\n";


		enemy.setHealth(enemy.getHealth() - battle.getDamage());

		if (enemy.getHealth() <= 0){
			cout << "Player wins!";
			break;
		}
			

		battle.setDamage(enemy.getLevel());

		cout << "Enemy damage: " << battle.getDamage() << "\n";

		player.setHealth(player.getHealth() - battle.getDamage());

		if (player.getHealth() <= 0){
			cout << "Enemy won!";
			break;

		}
			

		

		cout << "Player health: " << player.getHealth() << " " << "Enemy Health: " << enemy.getHealth() << "\n";
	}

}

