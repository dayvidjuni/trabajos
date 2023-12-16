#include <iostream>
#include <math.h>

int main(){

    float radio,area;
    double pi= M_PI;

    std::cout<<"por favor ingrese el radio del circulo: ";
    std::cin>>radio;    

    area=pi*pow(radio,2);
    
    std::cout<<"el area del circulo es: "<<area<<"\n";

    system("pause");
    return 0;
}