#include <iostream>

int main() {
    int N;
    char array[50]={};
    bool hay=false;

    std::cin >> N;

    for (int i = 0; i < N; i++) {

        std::cin>>array[i];
    }

    for (int i = 0; i < N; i++)
    {
        if (array[i]%2==0)
        {
            hay=true;
            std::cout<<"["<<array[i]<<"]";
        }
    }
    if (hay==false)
    {
        std::cout<<":("<<std::endl;
    }
    
    system("pause");
    return 0;
}