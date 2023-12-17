/*9.	Escriba un programa que te permita hallar el volumen de una circunferencia.*/
#include <iostream>
#include <math.h>

int main(){

    float radio,volumen;
    double pi=M_PI;

    std::cout<<"ingrese el valor del radio de la esfera: ";
    std::cin>>radio;

    volumen=(pi*pow(radio,3))*4/3;
    
    std::cout<<"el volumen de la esfera es: "<<volumen<<"\n";

    system("pause");
    return 0;
}