#include <iostream>

int main(){

    int base,altura,area;

    std::cout<<"por favor ingrese la base del triangulo: ";
    std::cin>>base;
    
    std::cout<<"por favor ingrese la altura del triangulo: ";
    std::cin>>altura;

    area=(base*altura)/2;
    
    std::cout<<"el area del triangulo es: "<<area<<"\n";

    system("pause");
    return 0;
}