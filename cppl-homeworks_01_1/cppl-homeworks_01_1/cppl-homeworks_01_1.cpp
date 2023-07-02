// cppl-homeworks_01_1.cpp 

#include <iostream>
#include <vector>
#include <algorithm>
#include <Windows.h>

int main()
{
    system("chcp 1251");
    system("cls");

    std::vector <int> vec{4, 7, 9, 14, 12};

    std::cout << "Входные данные:  ";
    std::for_each(vec.cbegin(), vec.cend(), [](const int& n){std::cout << n << " ";});
    std::cout << std::endl;
      
 
    std::cout << "Выходные данные: ";
    std::for_each(vec.cbegin(), vec.cend(), [](const int& n) 
        { if (n % 2) 
        std::cout << n*3 << " ";
        else std::cout << n << " ";
        }
    );
    std::cout << std::endl;

    return 0;
}
