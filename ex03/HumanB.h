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
	HumanB(std::string my_name);
	HumanB(std::string my_name, Weapon &my_weapon);
	void setWeapon(Weapon &new_weapon);
	void attack();
private:
	Weapon *_weapon;
	std::string _name;
};

#endif //HUMAN_B_H
