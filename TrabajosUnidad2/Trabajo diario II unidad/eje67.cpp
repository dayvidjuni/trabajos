/*-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/  
#include <iostream>
int main(){
    int num[1000]={};
    int i=0,total=0;
    do
    {
    std::cin>>num[i];
    i++;

    } while (num[i]!=0);

    for (int j = 0; j < i; j++)
    {
        total=num[j]+total;
    }
    
    std::cout<<total;
    system("pause");
    return 0;
}
