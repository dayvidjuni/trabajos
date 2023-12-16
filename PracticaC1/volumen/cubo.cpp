#include <iostream>
#include <math.h>

int main(){

    float lado,volumen;

    std::cout<<"ingrese la medida de un lado del cubo: ";
    std::cin>>lado;

    volumen=pow(lado,3);
    
    std::cout<<"el volumen del cubo es: "<<volumen<<"\n";

    system("pause");
    return 0;
}