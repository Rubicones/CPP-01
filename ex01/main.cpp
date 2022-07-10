//
// Created by rubicon on 05.07.2022.
//
#include "Zombie.h"

int main(){
	Zombie *zombies;

	zombies = zombieHorde(10, "Cringe");
	delete[] zombies;
}
