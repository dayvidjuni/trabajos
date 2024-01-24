/*4.	Escriba un código para resolver 
la multiplicación de dos números.*/
#include <iostream>

int main(){

    int n1,n2,producto;

    std::cout<<"ingrese los valores a multiplicar: \n";
    std::cin>>n1;
    std::cin>>n2;

    producto=n1*n2;

    std::cout<<"el producto los dos numeros es: "<<producto<<"\n";
    
    system("pause");
    return 0;
}