/*10 Escribir un programa que permita al usuario ingresar 6 números enteros, que pueden ser positivos o negativos.
Al finalizar, mostrar la sumatoria de los números negativos y el promedio de los positivos.
No olvides que no es posible dividir por cero, por lo que es necesario evitar 
que el programa arroje un error si no se ingresaron números positivos.
*/

#include <iostream>

int main() {
    

    int numeroTotal=6;
    int numero[6];

    for (int i = 0; i < numeroTotal; i++)
    {
        std::cout<<"ingrese 6 numeros enteros, numero posicion: "<<i+1<<"\n";
        std::cin>>numero[i];
    }
    
    float sumaPos=0,sumaNeg=0,can=0;

    for (int i = 0; i < numeroTotal; i++)
    {
        if (numero[i]>0)
        {
            sumaPos=numero[i]+sumaPos;
            can++;
        }
        if (numero[i]<0)
        {
            sumaNeg=numero[i]+sumaNeg;
        }
        
    }
    
    if (can==0)
    {
        std::cout<<"no se agregaron valores positivos";
    }
    float promedio=sumaPos/can;
    std::cout<<"el promedio de los positivos es: "<<promedio<<"\n";
    std::cout<<"la suma de los negativos es:"<<sumaNeg<<"\n";
    system("pause");
    return 0;
}