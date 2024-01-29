/* 1965. pb Password
-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>
#include <vector>
#include <cctype>

int main() {
    int cant; 
    std::vector<char> pass; 
    std::cin >> cant;

    for (int i = 0; i < cant; i++) {
        char n;
        std::cin >> n;
        pass.push_back(n);
    }
    
    int vocal = 0, igual = 0, tama = 0, num = 0;

    for (int i = 0; i < cant; i++) {
        
        if (pass[i] == 'a' || pass[i] == 'e' || pass[i] == 'i' || pass[i] == 'o' || pass[i] == 'u') {
            vocal++;
        }

        if (std::isdigit(pass[i])) {
                num++;
        }

        if (i > 0 && pass[i] == pass[i - 1]) {
            igual++;
        }
    }

    if (pass.size() >= 12 && vocal >= 1 && num >= 1 && igual == 0) {
        std::cout << "SEGURO";
    } else {
        std::cout << "INSEGURO";
    }

    system("pause"); 
    return 0;
}
