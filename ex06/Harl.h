//
// Created by Deadshot Gizzard on 7/9/22.
//

#ifndef HARL_H
#define HARL_H

#include <string>
#include <iostream>



class Harl{
public:
	void complain(std::string level);

private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	typedef void (Harl::*funArray)(void);
	static funArray arr[4];
};



#endif //HARL_H
