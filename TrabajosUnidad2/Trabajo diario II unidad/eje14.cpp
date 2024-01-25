/*-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main(){

    int N;
    std::cin >> N;
    int sumaDigitos = 0;

    while (N > 0) {
        sumaDigitos += N % 10; 
        N /= 10;  
    }

    std::cout<< sumaDigitos << std::endl;

    system("pause");

    return 0;
}