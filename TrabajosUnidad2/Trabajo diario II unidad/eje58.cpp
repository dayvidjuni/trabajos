#include <iostream>

int main(){


    int a,b;

    std::cin>>a>>b;

    if (a+b==5)
    {
        b=3+b;
        std::cout<<2*a+b;
    }else{

        a=a-1;
        if ((7*a+b) % 2 == 0)
        {
            std::cout<<a-b;
        }else{
            std::cout<<a*b;
        }
        
    }
    
    system("pause");
    return 0;
}