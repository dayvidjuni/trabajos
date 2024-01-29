/*11451. El perrito que quiere un hueso 
-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/

#include <iostream>

int main(){

    int tam1,ol1,tam2,ol2;
    
    std::cin>>tam1>>ol1;
    std::cin>>tam2>>ol2;

    if (tam1>tam2 && ol1>ol2)
    {
        std::cout<<"Hueso 1";
    }
    else if (tam2>tam1 && ol2>ol1)
    {
        std::cout<<"Hueso 2";
    }else{
        std::cout<<"Perrito confundido :(";
    }
    
    system("pause");
    return 0;
}

