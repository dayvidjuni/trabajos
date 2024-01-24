#include <iostream>
#include <string.h>
int ContarUnos(std::string numero){
    int contador=0,longitud=0;

    for (int i = 0; i < 16; i++)
    {
        if (numero[i]=='1')
        {
                contador++;
        }
    } 
    return contador;
}

 int main(){

    std::string numero = {};
    int unos=0;
    std::cin>>numero;

    unos=ContarUnos(numero);
    
    if (unos==0)
    {
        std::cout<<"no tiene ningun bit 1\n";
    }else{

        std::cout << "El numero de bits '1' es: " << unos <<std::endl;
    }
    system ("pause");
    return 0;
 }
