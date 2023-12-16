#include <iostream>
#include <math.h>

int main(){

    float radio,volumen,altura;
    double pi=M_PI;

    std::cout<<"por favor ingrese el radio del cono: ";
    std::cin>>radio;    
       
    std::cout<<"por favor ingrese la altura del cono: ";
    std::cin>>altura;    
    
    volumen=(pi*pow(radio,2)*altura)/3;
    
    std::cout<<"el volumen del cono es: "<<volumen<<"\n";

    system("pause");
    return 0;
}