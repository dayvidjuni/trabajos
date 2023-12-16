#include <iostream>

int main(){

    int lado,perimetro;

    std::cout<<"por favor ingrese el lado del cuadrado: ";
    std::cin>>lado;

    perimetro=lado*4;
    
    std::cout<<"el perimetro del cuadrado es: "<<perimetro<<"\n";

    system("pause");
    return 0;
}