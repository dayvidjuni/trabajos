/*-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main(){

    int matrizA[3][3], matrizB[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
        
            std::cin>>matrizA[i][j];
            matrizB[j][i]=matrizA[i][j]; 
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout<<matrizA[i][j];
        }
        std::cout<<"\n";
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout<<matrizB[i][j];
        }
        std::cout<<"\n";
    }

    system("pause");
    return 0;
}