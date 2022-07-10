//
// Created by Deadshot Gizzard on 7/10/22.
//
#include "HumanA.h"

HumanA::HumanA(std::string my_name, Weapon &my_weapon){
_weapon = &my_weapon;
_name = my_name;
}
void HumanA::attack(){
	std::cout << _name << " attacks with their " << _weapon->getType();
	std::cout << std::endl;
}