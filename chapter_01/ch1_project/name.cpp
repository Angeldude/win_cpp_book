#include "utils.h"
#include "name.h"

void print_name()
{
	//why isn't this noticed
	std::cout << "Type your first name and press [Enter]: ";
	std::string name;
	std::cin >> name;
	std::cout << name;
}