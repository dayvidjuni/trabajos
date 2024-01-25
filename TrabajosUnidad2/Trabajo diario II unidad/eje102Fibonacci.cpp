/*-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

using namespace std;

int main(){

    int n,x=0,y=1,z=0;

    do
    {
        cin>>n;
    } while (n<=1);
    
    cout<<"1 ";

    for (int i = 1; i < n; i++)
    {
        z=y+x;
        cout<<z<<" ";
    	x=y;
        y=z;
    }
    cout<<"\n";
    system("pause");
    return 0;
}