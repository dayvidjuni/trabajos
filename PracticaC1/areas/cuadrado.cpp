#include <iostream>

int main(){

    int lado,area;

    std::cout<<"por favor ingrese el lado del cuadrado: ";
    std::cin>>lado;

    area=lado*lado;
    
    std::cout<<"el area del cuadrado es: "<<area<<"\n";

    system("pause");
    return 0;
}