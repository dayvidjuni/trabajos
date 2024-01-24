#include <iostream>

int main() {
    int A,B,C,D,E;
    int operacion=0;

    std::cin>>A>>B>>C>>D>>E;

    operacion = A+B-(C*D*E);
    std::cout<<operacion;
    system("pause");
    return 0;
}