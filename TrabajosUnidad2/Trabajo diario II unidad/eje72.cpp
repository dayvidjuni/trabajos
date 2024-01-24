#include <iostream>

int main(){

    int a,b;

    std::cin>>a;
    std::cin>>b;

    if (a==b)
    {
        std::cout<<"iguales";
    }

    if (a<b)
    {
        std::cout<<"menor";
    }

    if (a>b)
    {
        std::cout<<"mayor";
    }
    system("pause");
    return 0;
    
}