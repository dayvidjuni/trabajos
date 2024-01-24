#include <iostream>
#include <cmath>

int main() {
    double x1, y1, x2, y2, x3, y3;
    
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    double area = 0.5 * std::abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));

    std::cout << area;

    system("pause");
    return 0;
}