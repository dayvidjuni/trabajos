#include <iostream>

int main(){


    int edad;
    std::cin>>edad;

    if (edad>=18)
    {
        std::cout<<"Es Mayor";
    }else if(edad<18){

        std::cout<<"Es Menor";
    }
    
    system("pause");
    return 0;
}