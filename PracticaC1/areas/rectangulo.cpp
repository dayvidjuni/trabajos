#include <iostream>

int main(){

    int base,altura,area;

    std::cout<<"por favor ingrese la base del rectangulo: ";
    std::cin>>base;
    
    std::cout<<"por favor ingrese la altura del rectangulo: ";
    std::cin>>altura;

    area=(base*altura);
    
    std::cout<<"el area del rectangulo es: "<<area<<"\n";

    system("pause");
    return 0;
}