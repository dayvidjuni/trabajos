/*5 Escribir un programa que solicite al usuario una cantidad y luego itere la cantidad de veces dada. En cada iteración, 
solicitar al usuario que ingrese un número. Al finalizar, mostrar la suma de todos los números ingresados.*/

#include <iostream>

int main(){

    int cantidad,numero,suma;

    std::cout<<"por favor ingrese la cantidad de numeros: ";
    std::cin>>cantidad;

    for (int i = 0; i < cantidad; i++)
    {
        std::cout<<"ingrese un numero: ";
        std::cin>>numero;
        suma=numero+suma;
    }
    
    std::cout<<"la suma de todos los numeros es: "<<suma<<"\n";
}