//
// Created by rubicon on 05.07.2022.
//
#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>
class Zombie{
public:
	Zombie(std::string name);
	void announce();
	void set_name(std::string name);
	Zombie *newZombie( std::string name );
	void randomChump( std::string name );
	~Zombie();
private:
	std::string _name;
};

#endif //ZOMBIE_H
