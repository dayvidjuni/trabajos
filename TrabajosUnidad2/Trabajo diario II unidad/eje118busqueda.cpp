/*-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main(){

    int lista[]={1,2,3,4,5},valor=0,pos=0;
    bool encontrado=false;
    for (int i = 0; i < 5; i++)
    {
        std::cout<<lista[i]<<" ";

    }
    std::cin>>valor;

    while (encontrado==false && pos<5 )
    {
        if (valor==lista[pos])
        {
            encontrado=true;
            break;
        }
        pos++;
    }
    if (encontrado==false)
    {
        pos=0;
    }
    else{
        std::cout<<"bien hecho";
    }
    
    system("pause");
    return 0;
}