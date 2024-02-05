/*6995. Programando fórmulas raras
-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/

#include <iostream>
#include <cmath>

double formula( float x, float y, float z){
    
    double pi=M_PI;
    double resultado=(x+(x*(y+pow(z,2))))/((x+pi)*(y+pi));

    return resultado;
} 
int main(){

    float x,y,z,pi;
    double resultado;

    std::cin>>x>>y>>z;
    pi=M_PI;
    
    if ((x+pi)*(y+pi)==0)
    {
        std::cout<<"error";
    }
    
    resultado=formula(x,y,z);
    
    std::cout<<resultado;

    system("pause");
    return 0;	
}