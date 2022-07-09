//
// Created by rubicon on 05.07.2022.
//

#include <fstream>
#include <string>
#include <iostream>

int main(int argc, char **argv){
	std::fstream to_replace;
	std::string s1;
	std::string tmp = "";
	std::string s2;
	std::string buf;

	(void)argc;
	s1 = argv[2];
	s2 = argv[3];
	to_replace.open(argv[1], std::ios_base::in);
	while (1){
		to_replace >> tmp;
		if (to_replace.eof())
			break;
		tmp = "";
		buf.append((std::string)tmp);
	}
	std::cout << buf << std::endl;


	return 0;
}
