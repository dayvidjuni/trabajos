/*7 Solicitar al usuario que ingrese una frase y luego 
imprimir la cantidad de vocales que se encuentran en dicha frase.*/

#include <iostream>

int main(){

    char texto[30];
    int la=0,le=0,li=0,lo=0,lu=0,suma=0;

    for (int i = 0; i < 30; i++)
    {
        texto[i]=' ';
    }
    
    std::cout<<"por favor ingrese una frase: ";
    std::cin.getline(texto,30);

    for (int i = 0; i < 30; i++)
    {
        switch (texto[i])
        {
            case 'a': la++; break;
            case 'e': le++; break;
            case 'i': li++; break;
            case 'o': lo++; break;
            case 'u': lu++; break; 
            std::cout<<texto[i];   
        }
    }
    
    suma=la+le+li+lo+lu;
    std::cout<<"la cantidad de vocales que ingresaste fue: "<<suma<<"\n";

    std::cout<<"mas espefivicamente:\n";

    std::cout<<"vocales a: "<<la<<"\n";
    std::cout<<"vocales e: "<<le<<"\n";
    std::cout<<"vocales i: "<<li<<"\n";
    std::cout<<"vocales o: "<<lo<<"\n";
    std::cout<<"vocales u: "<<lu<<"\n";

    system("pause");    
    return 0;
}