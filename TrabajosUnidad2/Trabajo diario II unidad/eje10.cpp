/*-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main(){

    int numero;

    std::cin>>numero;

    for (int i = 1; i <= numero; i++)
    {
        for (int j = 1; j < i*2; j++)
        {
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
    
    system("pause");
    return 0;
}