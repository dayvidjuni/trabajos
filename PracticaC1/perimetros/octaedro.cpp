#include <iostream>

int main(){

    int arista,suma;

    std::cout<<"por favor ingrese el valor de la arista del octaedro: ";
    std::cin>>arista;

    suma=arista*12;
    
    std::cout<<"el perimetro del octaedro es: "<<suma<<"\n";

    system("pause");
    return 0;
}