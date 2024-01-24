#include <iostream>

int main()
{

    int n;
    //std::cout<<"muestre el grado de agua para escamitas";
    std::cin>>n;

    if (n<15)
    {
        std::cout<<"fria!"<<std::endl<<"RIP escamitas :(";
    }
    else if(n<21 && n>=15)
    {
        std::cout<<"fria!";
    }
    else if (n<29 && n>=21)
    {
        std::cout<<"tibia";
    }
    else if (n<35 && n>=29)
    {
        std::cout<<"caliente!";
    }
    else if (n<100 && n>=35)
    {
        std::cout<<"caliente!"<<std::endl<<"RIP escamitas :(";
    }

    system("pause");
    return 0;
}