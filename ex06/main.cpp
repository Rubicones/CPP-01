//
// Created by rubicon on 05.07.2022.
//

#include "Harl.h"

int main(int argc, char **argv){
	Harl harl;

	(void)argc;
	for (int i = 1; argv[i]; i++){
		harl.complain((argv[i]));
	}
	return (0);
}
