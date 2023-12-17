/*3.	Escriba un código para resolver la división de dos números.*/
#include <iostream>

int main(){

    float n1,n2,cociente;
    
    inicio:

    std::cout<<"ingrese el dividendo: \n";
    std::cin>>n1;
    std::cout<<"\n";
    std::cout<<"ingrese el divisor: \n";
    std::cin>>n2;

    if (n2==0)
    {
        std::cout<<"no se puede dividir entre cero, intenta de nuevo \n\n";
        goto inicio;
    }

    cociente=n1/n2;

    std::cout<<"la division de los dos numeros es: "<<cociente<<"\n";

    system("pause");
    return 0;
}