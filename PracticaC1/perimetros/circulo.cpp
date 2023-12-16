#include <iostream>
#include <math.h>

int main(){

    float radio,perimetro;
    double pi=M_PI;

    std::cout<<"por favor ingrese el radio del circulo: ";
    std::cin>>radio;

    perimetro=2*radio*pi;
    
    std::cout<<"el perimetro del circulo es: "<<perimetro<<"\n";

    system("pause");
    return 0;
}