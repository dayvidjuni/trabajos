#include <iostream>

int main(){


    int n,par=0,im=0;
    int numero[100]={};

    std::cin>>n;

    for (int i = 0; i < n; i++)
    {
        std::cin>>numero[i];

        if (numero[i]%2==0)
        {
            par++;
        }
        else if(numero[i]%2!=0){
            im++;
        }
        
    }
    
    std::cout<<par<<" "<<im;

    system("pause");
    return 0;
}