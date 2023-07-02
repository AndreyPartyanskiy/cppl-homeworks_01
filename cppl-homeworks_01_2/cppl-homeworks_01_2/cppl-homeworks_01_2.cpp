// cppl-homeworks_01_2.cpp 

#include <iostream>
#include <vector>
#include <algorithm>
#include <Windows.h>
#include <variant>
#include <typeinfo>
#include <ctime>

   std::variant <int, std::string, std::vector<int>> get_variant() {
	std::srand(static_cast <int> (std::time(nullptr)));
	int random_variable = std::rand() % 3;

	std::variant<int, std::string, std::vector<int>> result;
	switch (random_variable)
	{
	case 0:
		result = 5;
		break;
	case 1:
		result = "string";
		break;
	case 2:
		result = std::vector<int>{ 1, 2, 3, 4, 5 };
		break;
	default:
		break;
	}
	return result;
	}

int main()
{
    system("chcp 1251");
    system("cls");

	auto var = get_variant();

	if (std::holds_alternative<std::string>(var)) std::cout << std::get<std::string>(var) << std::endl;
	if (std::holds_alternative<int>(var)) std::cout << std::get<int>(var)*2 << std::endl;
	if (std::holds_alternative<std::vector <int>>(var)) 
	{
		std::vector <int> abc = std::get<std::vector<int>>(var);
		std::for_each(abc.cbegin(), abc.cend(), [](const int& n) {std::cout << n << " "; });
		std::cout << std::endl;
	}
    return 0;
}