//
// Created by Deadshot Gizzard on 7/10/22.
//
#include "HumanB.h"

HumanB::HumanB(std::string my_name){
_name = my_name;
}
HumanB::HumanB(std::string my_name, Weapon &my_weapon){
_name = my_name;
_weapon = &my_weapon;
}
void HumanB::setWeapon(Weapon &new_weapon){
	_weapon = &new_weapon;
}
void HumanB::attack(){
	std::cout << _name << " attacks with their " << _weapon->getType();
	std::cout <<std::endl;
}