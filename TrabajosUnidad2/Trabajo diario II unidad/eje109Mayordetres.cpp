#include <iostream>

int main() {
    int a, b, c;
  
    std::cin >> c;
  
    a = c;
    b = c;
  
    for (int i = 0; i < 2; i++) {
        std::cin >> c;

        if (c < a) {
            a = c;
        }

        if (c > b) {
            b = c;
        }
    }
  
    std::cout << a << ' ' << b;

    system("pause");
    return 0;
}