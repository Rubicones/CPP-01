//
// Created by rubicon on 05.07.2022.
//

#include <fstream>
#include <string>
#include <iostream>

void read_file(char **argv, std::string &buf){
	std::fstream to_replace;
	std::string tmp = "";

	to_replace.open(argv[1], std::ios_base::in);
	while (1){
		std::getline(to_replace, tmp);
		buf.append((std::string)tmp);
		if (to_replace.eof())
			break;
		buf.append("\n");
		tmp = "";
	}
}

void replace(std::string &buf, std::string s1, std::string s2){
	int		pos = 0;

	while (pos != -1){
		pos = buf.find(s1, pos);
		if (pos != -1){
			buf.insert(pos, s2);
			buf.erase(pos + s2.length(), s1.length());
		}
	}
}

int main(int argc, char **argv){
	std::string s1;
	std::string s2;
	std::string buf;

	if (argc == 4){
		s1 = argv[2];
		s2 = argv[3];
		std::ofstream outfile(std::string(argv[1]) + ".replace");
		read_file(argv, buf);
		replace(buf, s1, s2);
		outfile << buf;
	}
	else
		std::cout << "Wrong arguments!" << std::endl;
	return 0;
}
