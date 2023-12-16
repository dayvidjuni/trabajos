#include <iostream>

int main(){

    int base,altura,area;

    std::cout<<"por favor ingrese la base del paralelogramo: ";
    std::cin>>base;
    
    std::cout<<"por favor ingrese la altura del paralelogramo: ";
    std::cin>>altura;

    area=(base*altura);
    
    std::cout<<"el area del paralelogramo es: "<<area<<"\n";

    system("pause");
    return 0;
}