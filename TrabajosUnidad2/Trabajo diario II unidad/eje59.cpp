#include <iostream>

int main() {

    int a, b;
    std::cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (i % a == 0) {
            std::cout << i << " ";
        }
    }

    system("pause");
    return 0;
}
