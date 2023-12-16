#include <iostream>

int main(){

    int lado,perimetro;

    std::cout<<"por favor ingrese el lado del triangulo: ";
    std::cin>>lado;

    perimetro=lado*3;
    
    std::cout<<"el perimetro del triangulo es: "<<perimetro<<"\n";

    system("pause");
    return 0;
}