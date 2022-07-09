//
// Created by rubicon on 06.07.2022.
//

#ifndef WEAPON_H
#define WEAPON_H

#include <string>
#include <iostream>

class Weapon{
public:
	Weapon(){ }
	Weapon(std::string type){
		_type = type;
	}
	void setType(std::string type){
		_type = type;
	}
	const std::string &getType(){
		return (_type);
	}
private:
	std::string _type;

};

#endif //WEAPON_H
