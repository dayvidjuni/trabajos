/*11427. Coincidencias de una cadena con su reverso
-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>
#include <algorithm>

int main() {
    std::string str, reversed;
    std::cin >> str; 
    std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c){ return std::tolower(c); });
    reversed = str;
    std::reverse(reversed.begin(), reversed.end());

    size_t counter = 0;
    for (int i = 0; i < str.size(); i++)
        if (str[i] == reversed[i])
            counter++;
            
    std::cout << counter << std::endl;

    system("pause");
    return 0;
}
