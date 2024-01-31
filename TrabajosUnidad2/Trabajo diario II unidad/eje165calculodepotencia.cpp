/* 18498. Cálculo de Potencia
-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>
#include <cmath>

int potencia(int base, int pot){
    
    if (pot==1)
    {
        return base;
    }else{

        return base*potencia(base,pot-1);
    }
    
}
int main(){
    
    int base,pot;

    std::cin>>base;
    std::cin>>pot;

    std::cout<<potencia(base,pot);

    system("pause");
    return 0;
}