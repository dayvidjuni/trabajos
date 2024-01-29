/*11611. Watermelon
-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/

#include <iostream>

int main(){

    float peso;
    float mitad;

    std::cin>>peso;

    mitad=peso/2+0.9;

    if (mitad>3 && static_cast<int>(mitad)%2==0)
    {
        std::cout<<"SI";

    }else{

        std::cout<<"NO";
    }

    system("pause");
    return 0;
}