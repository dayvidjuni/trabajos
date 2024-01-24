/*8 Escribir un programa que muestre la 
sumatoria de todos los números entre el 0 y el 100.*/   

#include <iostream>

int main(){

    int suma=0;

    for (int i = 0; i <= 100; i++)
    {
        suma=i+suma;
    }
    
    std::cout<<"la suma total es: "<<suma<<"\n";

    system("pause");
    return 0;
}