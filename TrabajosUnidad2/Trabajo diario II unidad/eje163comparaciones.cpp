/* 2471. Comparaciones
-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main(){
    
    int a,b;
    std::cin>>a>>b;
    if (a>b)
    {
        std::cout<<"mayor";
    }else if (a==b)
    {
        std::cout<<"iguales";
    }else
    {
        std::cout<<"menor";
    }
    system("pause");
    return 0;
}