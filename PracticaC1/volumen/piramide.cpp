#include <iostream>
#include <math.h>

int main(){

    float ladoBase,altura,volumen;

    std::cout<<"ingrese la medida de un lado de la base de la piramide: ";
    std::cin>>ladoBase;

    volumen=(pow(ladoBase,2)*altura)/3;
    
    std::cout<<"el volumen de la piramide es: "<<volumen<<"\n";

    system("pause");
    return 0;
}