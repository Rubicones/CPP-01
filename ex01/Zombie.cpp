//
// Created by Deadshot Gizzard on 7/10/22.
//
#include "Zombie.h"

Zombie::Zombie(){
	_name = "";
}

Zombie::Zombie(std::string name) {
	_name = name;
}
void Zombie::announce(){
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie::set_name(std::string name){
	_name = name;
}
Zombie *Zombie::newZombie( std::string name ){
	return (new Zombie(name));
}
void Zombie::randomChump( std::string name ){
	Zombie zomb(name);
	zomb.announce();
}
Zombie::~Zombie(){
	std::cout << _name << " died" << std::endl;
}
