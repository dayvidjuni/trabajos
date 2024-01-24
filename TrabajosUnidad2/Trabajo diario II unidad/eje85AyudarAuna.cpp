#include <iostream>

int main() {
    float compra, descuento = 0, descuentoTotal = 0;

    std::cin >> compra;

    if (compra < 500) {
        descuentoTotal = compra;
    } else if (compra <= 1000) {
        descuento = compra * 0.05;
    } else if (compra <= 7000) {
        descuento = compra * 0.11;
    } else if (compra <= 15000) {
        descuento = compra * 0.18;
    } else {
        descuento = compra * 0.25;
    }

    descuentoTotal = compra - descuento;

    std::cout << descuentoTotal;

    system("pause");
    return 0;
}