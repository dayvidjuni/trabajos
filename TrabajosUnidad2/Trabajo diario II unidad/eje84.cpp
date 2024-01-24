#include <iostream>

int main() {
    int r;  // Cambié r1 a r para hacerlo más corto pero aún descriptivo
    std::string input;

    std::cin >> input;

    if (input.size() > 4) {
        r = 4;
    } else {
        r = input.size();
    }

    for (int n = 0; n < r; n++) {
        std::cout << input[n] << " ASCII value is " << int(input[n]) << std::endl;
    }

    return 0;
}
