#include <iostream>

int main() {
    int num_elements, temp;
    float average = 0;

    std::cin >> num_elements;

    for (int i = 0; i < num_elements; i++) {
        std::cin >> temp;
        average += temp;
    }

    std::cout << average / num_elements;

    system("pause");
    return 0;
}