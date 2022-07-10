//
// Created by Deadshot Gizzard on 7/10/22.
//
#include "Weapon.h"

Weapon::Weapon(){ }
Weapon::Weapon(std::string type){
_type = type;
}
void Weapon::setType(std::string type){
	_type = type;
}
const std::string &Weapon::getType(){
	return (_type);
}