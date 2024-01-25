/*-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main(){

    int numeros[5]={},aux=0,ciclos=0;
    bool ordenado=false;

    for (int i = 0; i < 5; i++)
    {
        std::cin>>numeros[i];
    }

    for (int i = 0; i < 5 && ordenado== false; i++)
    {
		ordenado = true;
        for (int j = 0; j < 4; j++)
        {   
            if (numeros[j]>numeros[j+1])
            {   
                ordenado=false;
                aux=numeros[j];
                numeros[j]=numeros[j+1];
                numeros[j+1]=aux;
            }
            ciclos++;
        }
    }

    for (int i = 4; i >= 0; i--)
    {
        std::cout<<numeros[i]<<", ";
    }
    
    system("pause");
    return 0;
}