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
	HumanA(std::string my_name, Weapon &my_weapon);
	void attack();
private:
	Weapon *_weapon;
	std::string _name;
};

#endif //HUMAN_A_H
