/*-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>
#include <time.h>
int main(){

    int n1;

    do
    {
        std::cin>>n1;

    }while(n1<1 || n1>6);

    switch(n1){

        case 1:
            std::cout<<"presionaste el numero 1";
            break;
        case 2:
            std::cout<<"presionaste el numero 2 ";
            break;
        case 3:
            std::cout<<"presionarte el numero 3";
            break;
        case 4:
            std::cout<<"presionarte el numero 4";
            break;
        case 5:
            std::cout<<"presionarte el numero 5";
            break;
        case 6:
            std::cout<<"presionarte el numero 6";
            break;

    }
    system("pause");
    return 0;
}