//
// Created by rubicon on 06.07.2022.
//

#ifndef HUMAN_A_H
#define HUMAN_A_H

#include <string>
#include <iostream>
#include "Weapon.h"

class HumanA{
public:
	HumanA(std::string my_name, Weapon &my_weapon){
		_weapon = &my_weapon;
		_name = my_name;
	}
	void attack(){
		std::cout << _name << " attacks with their " << _weapon->getType();
		std::cout << std::endl;
	}
private:
	Weapon *_weapon;
	std::string _name;
};

#endif //HUMAN_A_H
