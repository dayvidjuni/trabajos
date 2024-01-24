/*Escribir un programa que muestre la sumatoria de todos 
los múltiplos de 3 encontrados entre el 0 y el 100.*/

#include <iostream>

int main(){

    int suma=0,j=0;

    for (int i = 0; i < 100; i=i+3)
    {
        suma=i+suma;
    }
    
    std::cout<<"la suma total es: "<<suma<<"\n";

    system("pause");
    return 0;
}