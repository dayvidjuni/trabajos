/* Imprimir los números entre el 5 y el 20, saltando de tres en tres.*/

#include <iostream>

int main(){

    for (int i = 5; i < 21 && i>=5; i=i+3)
    {
        std::cout<<i<<"\n";
    }
    system("pause");
    return 0;

}