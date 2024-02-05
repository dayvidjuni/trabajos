/*19249. RedesDeComunicación
-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>
/*funciones algo innecesarias pero no se por que me gusta hacerlas jajajajaj*/
int sacandox(int a, int b, int c, int d){

    return a+b+c+d;
}
int sacandoy(int a, int b, int c, int d){

    return a*b*c*d;
}
int main(){

    int a,b,c,d;

    std::cin>>a>>b>>c>>d;

    std::cout<<sacandox(a,b,c,d)<<"\n";
    std::cout<<sacandoy(a,b,c,d);
    system("pause");
    return 0;
}