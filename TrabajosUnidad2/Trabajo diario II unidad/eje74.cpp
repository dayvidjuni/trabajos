#include <iostream>
#include <string>
#include <algorithm>

int main(){

    std::string car={};

    std::getline(std::cin, car);

    std::reverse(car.begin(), car.end());

    std::cout<<car;


    system("pause");
    return 0;
}