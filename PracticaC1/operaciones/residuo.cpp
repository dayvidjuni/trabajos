#include <iostream>

int main(){

    int n1,n2,residuo;

    std::cout<<"ingrese 2 numeros: \n";
    std::cin>>n1;
    std::cin>>n2;

    residuo=n1%n2;

    std::cout<<"el residuo de los dos numeros es: "<<residuo<<"\n";
    
    system("pause");
    return 0;
}