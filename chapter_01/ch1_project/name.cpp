#include "utils.h"
#include "name.h"

void print_name()
{
	std::cout << "Type your first name and press [Enter]: ";
	std::string name;
	std::cin >> name;
	std::cout << name;
}