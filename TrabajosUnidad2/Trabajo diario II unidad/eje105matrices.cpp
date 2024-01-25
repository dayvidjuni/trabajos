/*-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main(){

    int matriza[100][100];

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            std::cin>>matriza[i][j];
        }
        
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            std::cout<<"\n"<<matriza[i][j];
        }
        std::cout<<"\n";
    }
    system("pause");
    return 0;
}
