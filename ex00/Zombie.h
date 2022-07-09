//
// Created by rubicon on 05.07.2022.
//
#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>
class Zombie{
public:
	Zombie(std::string name){
		_name = name;
	}
	void announce(){
		std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	}
	void set_name(std::string name){
		_name = name;
	}
	Zombie *newZombie( std::string name ){
		return (new Zombie(name));
	}
	void randomChump( std::string name ){
		Zombie zomb(name);
		zomb.announce();
	}
	~Zombie(){
		std::cout << _name << " died" << std::endl;
	}
private:
	std::string _name;
};

#endif //ZOMBIE_H
