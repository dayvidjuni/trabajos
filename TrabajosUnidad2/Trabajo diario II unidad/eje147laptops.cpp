#include <iostream>

int main() {
    int a, n, maxVal = 0, index;

    std::cin >> a;

    for (int i = 1; i <= a; i++) {
        std::cin >> n;

        if (maxVal < n) {
            maxVal = n;
            index = i;
        }
    }

    std::cout << index << " " << maxVal;

    system("pause");
    return 0;
}