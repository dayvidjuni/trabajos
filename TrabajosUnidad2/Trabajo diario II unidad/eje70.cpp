#include <iostream>

int main(){

    int n;

    std::cin>>n;
    
    if (n%2==0)
    {
        std::cout<<"par";
    }else{
        
        std::cout<<"impar";
    }
    

    system("pause");
    return 0;
}