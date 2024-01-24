#include <iostream>
#include<string.h>

int main(){

    char texto[30]={};
    int a=0,e=0,i=0,o=0,u=0,suma=0;

    std::cin.getline(texto,30,'\n');

    strupr(texto);

    for (int i = 0; i < 30; i++)
    {
        switch (texto[i])
        {
            case 'A': a++; break;
            case 'E': e++; break;
            case 'I': i++; break;
            case 'O': o++; break;
            case 'U': u++; break;    
        }
    }
    suma=a+e+i+o+u;
    std::cout<<suma;

    system("pause");    
    return 0;
}