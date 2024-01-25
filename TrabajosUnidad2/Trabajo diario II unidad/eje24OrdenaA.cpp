/*-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main(){

    int numero[4]={},min=0,aux=0;


    for (int i = 0; i < 4; i++)
    {
        std::cin>>numero[i];
    }
    
    for (int i = 0; i < 4; i++)
    {
        min=i;
        for (int j = i+1; j < 4; j++)
        {
            if (numero[min]>numero[j])//i-i
            {
                min=j;
            }
        }

        aux=numero[i];
        numero[i]=numero[min];
        numero[min]=aux;
    }
    

    for (int i = 3; i >= 0; i--)
    {
        std::cout<<numero[i];
    }
    
    system("pause");
    return 0;
}