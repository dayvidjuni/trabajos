/*-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main() {
    char option;
    int money = 1000, amount;

    while (std::cin >> option) {
        switch (option) {
            case 'C':
                std::cout << "$" << money << std::endl;
                break;
            case 'D':
                std::cin >> amount;
                money += amount;
                break;
            case 'R':
                std::cin >> amount;
                money -= amount;
                break;
            case 'S':
                return 0;
        }
    }
    system("pause");
    return 0;
}