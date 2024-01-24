#include <iostream>
#include <time.h>

using namespace std;
main(){

    int numero, aleatorio, contador=0;
    srand(time(NULL));
    aleatorio=1+rand()%100;

    do
    {
        cin>>numero;
        if (numero>aleatorio)
        {
            cout<<"el numero es mayor";
    
        }
        if (numero<aleatorio)
        {
            cout<<"el numero es menor";
        }
        contador++;
    } while (numero!=aleatorio);

    cout<<"encontraste el numero en "<<contador<<" intentos";
    
    system("pause");
    return 0;
}