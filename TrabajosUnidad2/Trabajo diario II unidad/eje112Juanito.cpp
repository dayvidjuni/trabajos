#include <iostream>

int main() {
    int manyProducts, finalPrice = 0; 

    for (int n = 0; n < 6; n++) {
        std::cin >> manyProducts;

        switch (n) {
            case 0:
                finalPrice += manyProducts * 15;
                break;
            case 1:
                finalPrice += manyProducts * 20;
                break;
            case 2:
                finalPrice += manyProducts * 19;
                break;
            case 3:
            case 4:
                finalPrice += manyProducts * 10;
                break;
            case 5:
                finalPrice += manyProducts * 5;
                break;
        }
    }

    std::cout << finalPrice;

    return 0;
}