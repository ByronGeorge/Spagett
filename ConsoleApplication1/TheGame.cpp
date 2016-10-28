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
	for (int i = 0; i < 20; i++) {
		cout << "Spagett!" << endl;	
	}
	srand(time(NULL));
	cout << "| Welcome to the game! |" << endl;
	cout << "Please enter your name: ";
	string name;
	cin >> name;

	Character player(name, 1, 20);
	Character enemy("Bitch", 1, 20);
	
	cout << "Welcome " << player.getName() << "! You are fighting " << enemy.getName() << "!" << endl;
	cout << "Press a to attack or h to heal." << endl;
	Battle battle(player, enemy);

	

	
	
	}


	
	





