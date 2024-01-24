/*15318. Imprimiendo enteros por paridad*/
/*-------------------------------------------------------------------


---------------------------------------------------------------------
*/
#include <iostream>

int main(){

    int P,longitud;

    std::cin>>longitud;

    int N[longitud];
    for (int i = 0; i < longitud; i++)
    {
        std::cin>>N[i];
    }
    std::cin>>P;
    for (int i = 0; i < longitud; i++)
    {
        if (P==0 && N[i]%2==0)
        {
            std::cout<<N[i]<<" ";;
        }
        if (P==1 && N[i]%2!=0)
        {
            std::cout<<N[i]<<" ";
        }
        
    }
    
    return 0;
}