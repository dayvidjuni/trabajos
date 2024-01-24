#include <iostream>

int main(){

    int matriza[100][100], matrizb[100][100];


    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            
            std::cin>>matriza[i][j];
        }
        
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matrizb[i][j]=matriza[i][j];
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            std::cout<<"\n"<<matrizb[i][j];
        }
        std::cout<<"\n";
    }
    system("pause");
    return 0;
}
