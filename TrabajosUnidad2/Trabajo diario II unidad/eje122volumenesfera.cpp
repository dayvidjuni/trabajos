#include <iostream>
#include <math.h>

int main(){

    float radio,volumen;
    double pi=M_PI;

    std::cin>>radio;

    volumen=(pi*pow(radio,3))*4/3;
    
    std::cout<<volumen;

    system("pause");
    return 0;
}