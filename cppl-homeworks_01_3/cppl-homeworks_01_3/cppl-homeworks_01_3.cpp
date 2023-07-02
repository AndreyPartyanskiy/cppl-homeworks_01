// cppl-homeworks_01_3.cpp 

#include <functional>
#include <iostream>
#include <vector>
#include <Windows.h>
#include <math.h>

int main()
{
	system("chcp 1251");
	system("cls");

	std::vector<int> angles{30,60,90};
	std::vector <std::function<void(int)>> functions{ [](int a) {std::cout << " sin: " << sin(a * 3.1415926 / 180); },[](int a) {std::cout << " cos: " << cos(a * 3.1415926 / 180); }};
		
	std::cout << "[Входные данные]: ";
	for (const auto& angle : angles) std::cout << angle << " * 3.1415926 / 180" << ", ";
    std::cout << std::endl;
	std::cout << "[Выходные данные]: " << std::endl;
    
	for (const auto& angle : angles) 
    {
	std::cout << angle* 3.1415926 / 180 << ": ";
	for (const auto& function : functions)
		function(angle);
	std::cout << std::endl;
    }
	return 0;
}
