#include <iostream>

int main() {
    
    int edades[5],suma=0;
    float promedio;
    for (int i = 0; i < 5; i++)
    {
        std::cout<<"por favor ingrese la edad de la persona "<<i+1<<" : \n";
        std::cin>>edades[i];
    }
    
    for (int i = 0; i < 5; i++)
    {
        suma=edades[i]+suma;
    }
    promedio=suma/5;
    std::cout << "El promedio de edad de las 5 personas es: " << promedio <<"\n";

    system("pause");
    return 0;
}