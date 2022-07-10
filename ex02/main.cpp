//
// Created by rubicon on 05.07.2022.
//
#include <string>
#include <iostream>

int main(){
	std::string here_string = "HI THIS IS BRAIN";
	std::string *stringPTR = &here_string;
	std::string &stringREF = here_string;

	std::cout << &here_string << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << here_string << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}
