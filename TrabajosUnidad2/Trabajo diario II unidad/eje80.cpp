#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
  int r;
  float a, b, c;

  std::cin >> r;

  for (int n = 0; n < r; ++n) {
    std::cin >> a;

    b = a / 2;

    c = a * a - b * b;
    c = sqrt(c);

    std::cout << std::fixed << std::setprecision(2) << c << std::endl;
  }

  system("pause");
  return 0;
}