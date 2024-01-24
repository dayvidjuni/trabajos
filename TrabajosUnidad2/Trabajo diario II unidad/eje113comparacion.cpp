#include <iostream>
#include <string.h>

int main(){

    char texto1[100]={};
    char texto2[100]={};
    int comparar;

    std::cin>>texto1,texto2;

    comparar=strcmp(texto1,texto2);
    if (comparar==0)
    {
        std::cout<<"ambas palabras son iguales";
    }
    if (comparar!=0)
    {
        std::cout<<"ambos textos son diferentes\n\n";

        if (comparar>0)
        {
            std::cout<<"el texto 1 es mayor que el segundo\n";
        }
        if (comparar<0)
        {
            std::cout<<"el primer texto es menor que el segundo texto\n";
        }
    }
    
    system("pause");
    return 0;
}