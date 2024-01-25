/*-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main() {
    int a, b, c;
    
    std::cin >> a;
    
    b = a;
    c = a;
    
    for (int i = 0; i < 4; i++) {
        std::cin >> a;
        
        if (a > b) {
            b = a;
        } else if (a < c) {
            c = a;
        }
    }
    
    std::cout << c << ' ' << b;

    system("pause");
    return 0;
}