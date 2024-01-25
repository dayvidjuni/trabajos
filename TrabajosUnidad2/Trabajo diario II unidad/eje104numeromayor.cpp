/*-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main(){

    int matriz[100], mayor=0, cantidad;

    do
    {
        std::cin>>cantidad;
    } while ((cantidad<1) || (cantidad>100));

    for(int i=0 ; i<cantidad; i++){

        std::cin>>matriz[i];
        if (matriz[i]>mayor)
        {
            mayor=matriz[i];
        }
    }
    
    std::cout<<mayor;
    system("pause");
    return 0;

}