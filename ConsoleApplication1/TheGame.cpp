// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Character.h"
#include "Battle.h"
#include <cstdlib>
#include <time.h>

using namespace std;



int main()
{

	cout << "| Welcome to the game! |\n";
	cout << "Please enter your name: ";
	string name;
	cin >> name;

	Character player(name, 1, 20);
	
	Battle battle;

	battle.runBattle(player, battle);

	

	
	
	}


	
	





