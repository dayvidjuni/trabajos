#include <iostream>
#include <math.h>

int main(){

    float radio,volumen,altura;
    double pi= M_PI;

    std::cout<<"por favor ingrese el radio del cilindro: ";
    std::cin>>radio;    
       
    std::cout<<"por favor ingrese la altura del cilindro: ";
    std::cin>>altura;    
    
    volumen=pi*pow(radio,2)*altura;
    
    std::cout<<"el volumen del cilindro es: "<<volumen<<"\n";

    system("pause");
    return 0;
}