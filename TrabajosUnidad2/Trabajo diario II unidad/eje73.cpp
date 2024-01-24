#include <iostream>

int main(){

    int num,aux=0;
    std::cin>>num;

    int datos[100]={};


    for (int i = 0; i < num; i++)
    {
        std::cin>>datos[i];

        if (datos[i]>aux)
        {
            aux=datos[i];
        }
        
    }
    std::cout<<aux;
    system("pause");
    return 0;
}