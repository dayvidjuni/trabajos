/*11432. Bubu y las edades cluberas
-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers;
    int in;

    while (std::cin >> in) {
        numbers.push_back(in);
    }

    std::sort(numbers.begin(), numbers.end());
    numbers.erase(std::unique(numbers.begin(), numbers.end()), numbers.end());

    std::cout << "[";
    while (!numbers.empty()) {
        if (numbers.size() > 1)
            std::cout << "'" << numbers.back() << "', ";
        else
            std::cout << "'" << numbers.back() << "']" << std::endl;

        numbers.pop_back();
    }

    system("pause");
    return 0;
}