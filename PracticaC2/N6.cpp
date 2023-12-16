/*6 Solicitar al usuario que ingrese una frase y luego imprimir un 
listado de las vocales que aparecen en esa frase (sin repetirlas).*/

#include <iostream>
#include <string.h>

int main(){

    char palabra[30] ={'\0'};
    int la=0,le=0,li=0,lo=0,lu=0;

    std::cout<<"ingresa una frase, que sea en minusculas, me da pereza hacer otros con mayuscula: ";
    std::cin.getline(palabra,30);
    
    for (int i = 0; i < 30; i++)
    {
        switch (palabra[i])
        {
            case 'a': 
                la=la+1;
                if (la==1)
                {
                    std::cout<<'a'<<"\n";
                }
                 
                break;
                
            case 'e': 
                le=le+1;
                if (le==1)
                {
                    std::cout<<'e'<<"\n";
                }
                 
                break;
                
            case 'i': 
                li++;
                if (li==1)
                {
                    std::cout<<'i'<<"\n";
                }
                 
                break;
                
            case 'o': 
                lo++;
                if (lo==1)
                {
                    std::cout<<'o'<<"\n";
                }
                 
                break;
                
            case 'u': 
                lu++;
                if (lu==1)
                {
                    std::cout<<'u'<<"\n";
                }
                 
                break;
                
        }
    }
    
    system("pause");
    return 0;

}