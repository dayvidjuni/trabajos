/* 18499. Números cuñados
-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>
#include <algorithm>
#include <string>
int main(){

    int numero;
    int numero2;

    std::cin>>numero;
    std::cin>>numero2;

    std::string numero_string = std::to_string(numero);
    std::string numero2_string = std::to_string(numero2);

    std::reverse(std::begin(numero_string), std::end(numero_string)); 

    if (numero_string==numero2_string)
    {
        std::cout<<"Cunados";
    }else{
        std::cout<<"No Cunados";
    }
    
    system("pause");
    return 0;
}