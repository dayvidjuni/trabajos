/*13769. En busca de la mayor diversión 
-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main(){

    int diversion[34]; 
    int n, min,aux=999;

    std::cin>>n;

    for (int i = 0; i < n; i++)
    {
        std::cin>>diversion[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        if (diversion[i]<aux)
        {
            min=i;
            aux=diversion[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i!=min)
        {
            std::cout<<i+1<<std::endl;
        }
    }
    

    system("pause");
    return 0;
}