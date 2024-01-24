#include <iostream>

int main(){

    int tam,ope,pun=0,tot=0,cont=1,cop;
    std::cin>>tam;
    int M[tam][tam];

    ope=(tam+1)*2;

    for (int i = 0; i <= tam; i++)
    {
        for (int j = 0; j <= tam; j++)
        {
            std::cin>>M[i][j];
        }
    }
    
    cop=M[3][3];
    int V[ope];
    M[3][3]=cop;

    for (int a = 0; a <= tam; a++)
    {
        tot=tot+M[a][a];
    }
    V[cont]=tot;

    cont=cont+1;
    V[cont]=0;
    
    for (int b = 0; b <= tam; b++)
    {
        V[cont]=V[cont]+M[b][tam-b+1];
    }
    cont=cont+1;
    V[cont]=0;

    for (int c = 0; c <= tam; c++)
    {
        for (int d = 0; d <= tam; d++)
        {
            V[cont]=V[cont]+M[d][c];
        }
        
    }
    cont=cont+1;
    V[cont]=0;

    for (int e = 0; e <= tam; e++)
    {
        for (int f = 0; f <= tam; f++)
        {
            V[cont]=V[cont]+M[e][f];
        }
        
    }
    cont=cont+1;
    V[cont]=0;

    for (int g = 0; g < cont; g++)
    {
        if (tot==V[g])
        {
            pun=pun+1;
        }
        
    }
    
    for (int i = 0; i <= ope; i++)
    {
        std::cout<<V[i]<<std::endl;
    }
    if (pun==ope)
    {
        std::cout<<std::endl<<"1";
    }else{

        std::cout<<std::endl<<"1";
    }
    
    return 0;


    system("pause");
    return 0;

}