/*13.	Escriba un programa que te permita determinar en qué etapa de 
la vida está en razón a su fecha de nacimiento de acuerdo a la gráfica:*/
#include <iostream>

int main(){

    int edad;

    std::cout<<"por favor ingrese su edad actual: ";
    std::cin>>edad;

    if(edad==0){
        std::cout<<"se encuentra en la edad prenatal, por alguna razon que no entiendo: \n";
    }
    else if(edad<=6 && edad!=0){
        std::cout<<"se encuentra en la Infancia: \n";
    }
    else if(edad<=12 && edad!=0 && edad>6){
        std::cout<<"se encuentra en la niñez: \n";
    }
    else if(edad<=20 && edad!=0 && edad>12){
        std::cout<<"se encuentra en la adolescencia: \n";
    }
    else if(edad<=25 && edad!=0 && edad>20){
        std::cout<<"se encuentra en la juventud: \n";
    }
    else if(edad<=60 && edad!=0 && edad>25){
        std::cout<<"se encuentra en la adultez: \n";
    }
    else if(edad!=0 && edad>60){
        std::cout<<"se encuentra en la vejez: \n";
    }

    system("pause");
    return 0;
}