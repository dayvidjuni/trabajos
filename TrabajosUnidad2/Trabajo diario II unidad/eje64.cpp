/*-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main(){

    int n,a,b;

    std::cin>>n>>a>>b;

    if (n<1000)
    {
        if (n%2==0)
        {
            for (int i = 0; i < a; i++)
            {
                n=n+i;
            }
            
        }else{
            for (int i = 0; i < b; i++)
            {
                n=n+i;
            }
        }
        
    }
    
    std::cout<<n;
    system("pause");
    return 0;
}