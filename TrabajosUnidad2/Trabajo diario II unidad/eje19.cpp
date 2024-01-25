/*-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main() {
    
    char array[20]={};
    int modulo,n,operacion,aux=0;
    std::cin>>n;
    std::cin>>modulo;

    for (int i = 0; i < n; i++)
    {
        std::cin>>array[i];
        aux+=array[i]-'0';
    }
    
    operacion=aux%modulo;
    std::cout<<operacion;

    system("pause");
    return 0;
}