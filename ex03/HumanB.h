//
// Created by rubicon on 06.07.2022.
//

#ifndef HUMAN_B_H
#define HUMAN_B_H

#include <string>
#include <iostream>
#include "Weapon.h"

class HumanB{
public:
	HumanB(std::string my_name){
		_name = my_name;
	}
	HumanB(std::string my_name, Weapon &my_weapon){
		_name = my_name;
		_weapon = &my_weapon;
		std::cout << _weapon->getType() << std::endl;
	}
	void setWeapon(Weapon &new_weapon){
		_weapon = &new_weapon;
		std::cout << _weapon->getType() << std::endl;

	}
	void attack(){
		std::cout << _name << " attacks with their " << _weapon->getType();
		std::cout <<std::endl;
	}
private:
	Weapon *_weapon;
	std::string _name;

};

#endif //HUMAN_B_H
