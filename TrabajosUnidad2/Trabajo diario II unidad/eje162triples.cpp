/* 6117. Triples 
-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main(){

    int longitud,contador=0;
    std::cin>>longitud;

    int numero[longitud]={};

    for (int i = 0; i < longitud; i++)
    {
        std::cin>>numero[i];
        if (numero[i]%3==0)
        {
            contador++;
        }
        
    }
    if (contador==0)
    {
        std::cout<<"No hay triples";
    }else
    {
        std::cout<<contador<<"\n";    
    }
    

    for (int  i = 0; i < longitud; i++)
    {
        if (numero[i]%3==0)
        {
            std::cout<<i+1<<" ";
        }        
    }
    system("pause");
    return 0;
}