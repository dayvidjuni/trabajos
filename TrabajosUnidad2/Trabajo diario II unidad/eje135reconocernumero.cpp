#include <iostream>
int main(){
    int n1;
    regreso:
    std::cout<<"ingresa un numer entre 1 y 5 o 6: ";
    std::cin>>n1;

    switch (n1)
    {
    case 1:
        std::cout<<"ingresaste el numero 1\n"; 
        goto regreso;
        break;
    case 2:
        std::cout<<"ingresaste el numero 2\n";
        goto regreso;
        break;
    case 3:
        std::cout<<"ingresaste el numero 3\n";
        goto regreso;
        break;
    case 4:
        std::cout<<"ingresaste el numero 4\n";
        goto regreso;
        break;
    case 5:
        std::cout<<"ingresaste el numero 5\n";
        goto regreso;
        break;
    case 6:
        std::cout<<"no entiendo la salida XD\n";
        break;
        return 0;
    default: 
        goto regreso;
        break;
    }
    system("pause");
    return 0;

}