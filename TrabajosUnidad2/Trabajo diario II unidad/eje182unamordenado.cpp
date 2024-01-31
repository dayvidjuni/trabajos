/*6447. ULAM ordenado
-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> array;
    int num;
    
    cin >> num;
    
    while (num != 1) {
        array.push_back(num);

        if (num % 2) {
            num = (num * 3) + 1;
        } else {
            num /= 2;
        }
    }

    array.push_back(1);
    
    sort(array.begin(), array.end());

    for (int i = 0; i < array.size(); i++) {
        cout << array[i] << " ";
    }

    return 0;
}
