#include <iostream>

int main(){

    int suma=0,j=0;

    for (int i = 0; i < 100; i=i+3)
    {
        suma=i+suma;
    }

    std::cout<<suma;

    system("pause");
    return 0;
}