//
// Created by rubicon on 05.07.2022.
//
#include "Zombie.h"


Zombie *zombieHorde(int N, std::string name){
	Zombie *zombies = new Zombie[N];

	for (int i = 0; i < N; i++){
		zombies[i].set_name(name);
		zombies[i].announce();
	}
	return (zombies);
}

int main(){
	Zombie *zombies;

	zombies = zombieHorde(10, "Cringe");
	delete[] zombies;
}
