//
// Created by rubicon on 05.07.2022.
//
#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie{
public:
	Zombie(){}

	Zombie(std::string name){
		_name = name;
	}

	void announce(){
		std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	}

	Zombie *newZombie( std::string name ){
		Zombie *zomb = new Zombie(name);
		return (zomb);
	}

	void set_name(std::string name){
		_name = name;
	}

	void randomChump( std::string name ){
		Zombie zomb(name);
		zomb.announce();
	}

	~Zombie(){
		std::cout << _name << " died" << std::endl;
	}
private:
	Zombie *new_zombie;
	std::string _name;
};

#endif //ZOMBIE_H
