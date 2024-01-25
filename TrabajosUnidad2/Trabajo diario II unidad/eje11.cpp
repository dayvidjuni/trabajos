/*-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>


void burbuja( char numero[] ){
    
    bool ordenado = false;
    int aux;

    for (int i = 0; i < 5; i++)
    {
        ordenado=true;

        for (int j = 0; j < 4; j++)
        {
            ordenado=false;
            if (numero[j]>numero[j+1])
            {
                aux=numero[j];
                numero[j]=numero[j+1];
                numero[j+1]=aux;
            }
            
        }
        
    }
    

}


int main(){


    char numero[10]={},numerosOrdenados[10]={};
    int aux=0,ciclos=0;
    bool ordenado=false;

    for (int i = 0; i < 5; i++)
    {
        std::cin>>numero[i];
    }
    
        burbuja(numero);

    for (int i = 0; i < 5; i++)
    {
        std::cout<<numero[i]<<", ";
    }

    
    system("pause");
    return 0;
}