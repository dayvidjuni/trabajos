/*-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>
#include <stdlib.h>

int main(){

    char texto[4],texto1[2],texto2[2];
    int num1,num2,suma=0;

    std::cin>>texto;
    texto1[0]=texto[0];
    texto1[1]=texto[1];
    texto1[2]='\0';
    num1=atoi(texto1);

    texto2[0]=texto[2];
    texto2[1]=texto[3];
    texto2[2]='\0';
    num2=atoi(texto2);

    suma=num1+num2;

    std::cout<<suma;

    system("pause");
    return 0;
}