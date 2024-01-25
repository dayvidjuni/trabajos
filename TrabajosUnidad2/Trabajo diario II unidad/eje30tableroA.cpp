/*-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main(){

    char caracter;
    int x,y;

    std::cin>>caracter>>y;
    
    x=caracter-'a'+1;

    if (x%2 == y%2)
    {
        std::cout<<"NEGRO";
    }else
    {
        std::cout<<"BLANCO";
    }

    system("pause");
    return 0;
}