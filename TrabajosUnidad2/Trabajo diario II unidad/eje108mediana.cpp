#include <iostream>

int main() {
    int n;
    
    std::cin >> n;
    
    int a[n] = {0};

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::cout << a[(n - 1) / 2];

    system("pause");
    return 0;
}