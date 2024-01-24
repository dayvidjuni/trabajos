#include <iostream>
int main(){
    float n1,n2,sum,res,mul,div;

    std::cin>>n1;
    
    std::cin>>n2;

    sum=n1+n2;
    res=n1-n2;
    mul=n1*n2;
    div=n1/n2;

    std::cout<< sum;
    std::cout<< res;
    std::cout<< mul;
    std::cout<< div;
    
    system("pause");
    return 0;
}