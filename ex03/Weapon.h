//
// Created by rubicon on 06.07.2022.
//

#ifndef WEAPON_H
#define WEAPON_H

#include <string>
#include <iostream>

class Weapon{
public:
	Weapon();
	Weapon(std::string type);
	void setType(std::string type);
	const std::string &getType();
private:
	std::string _type;
};

#endif //WEAPON_H
