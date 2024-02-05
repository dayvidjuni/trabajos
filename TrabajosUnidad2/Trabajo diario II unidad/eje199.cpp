/*19288. Evaluando una función algo rara 2
-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>
#include <cmath>
int formula(int a, int b){

    if (a==0 || b==0)
    {
        return a+2*b+3;
    }
    else{
        return ((formula(a-1,b)+formula(a-1,-1*b))+1);
    }
    
}
int main(){

    int a,b;

    std::cin>>a>>b;

    std::cout<<formula(a,b);

    system("pause");
    return 0;
}