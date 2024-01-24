#include <iostream>

int main() {
    int rows, columns, i, k;
    std::cin >> rows >> columns;
    int matrix[rows][columns];

    for (i = 0; i < rows; i++) {
        for (k = 0; k < columns; k++) {
            std::cin >> matrix[i][k];
        }
    }

    for (i = 0; i < rows; i++) {
        for (k = columns - 1; k >= 0; k--) {
            std::cout << matrix[i][k] << " ";
        }
        std::cout << "\n";
    }

    system("pause");
    return 0;
}