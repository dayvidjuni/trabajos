/* operaciones matrizales
-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>
#include <vector>

void imprimirMatriz(const std::vector<std::vector<int>>& matriz) {
    for (const auto& fila : matriz) {
        for (int valor : fila) {
            std::cout << valor << " ";
        }
        std::cout << std::endl;
    }
}

void suma(const std::vector<std::vector<int>>& A, const std::vector<std::vector<int>>& B) {
    if (A.size() != B.size() || A[0].size() != B[0].size()) {
        std::cout << "X" << std::endl;
    } else {
        std::vector<std::vector<int>> resultado(A.size(), std::vector<int>(A[0].size(), 0));
        for (size_t i = 0; i < A.size(); ++i) {
            for (size_t j = 0; j < A[0].size(); ++j) {
                resultado[i][j] = A[i][j] + B[i][j];
            }
        }
        imprimirMatriz(resultado);
    }
}

void resta(const std::vector<std::vector<int>>& A, const std::vector<std::vector<int>>& B) {
    if (A.size() != B.size() || A[0].size() != B[0].size()) {
        std::cout << "X" << std::endl;
    } else {
        std::vector<std::vector<int>> resultado(A.size(), std::vector<int>(A[0].size(), 0));
        for (size_t i = 0; i < A.size(); ++i) {
            for (size_t j = 0; j < A[0].size(); ++j) {
                resultado[i][j] = A[i][j] - B[i][j];
            }
        }
        imprimirMatriz(resultado);
    }
}

void multiplicacion(const std::vector<std::vector<int>>& A, const std::vector<std::vector<int>>& B) {
    if (A[0].size() != B.size()) {
        std::cout << "X" << std::endl;
    } else {
        std::vector<std::vector<int>> resultado(A.size(), std::vector<int>(B[0].size(), 0));
        for (size_t i = 0; i < A.size(); ++i) {
            for (size_t j = 0; j < B[0].size(); ++j) {
                for (size_t k = 0; k < A[0].size(); ++k) {
                    resultado[i][j] += A[i][k] * B[k][j];
                }
            }
        }
        imprimirMatriz(resultado);
    }
}

void traspuesta(const std::vector<std::vector<int>>& A) {
    std::vector<std::vector<int>> resultado(A[0].size(), std::vector<int>(A.size(), 0));
    for (size_t i = 0; i < A.size(); ++i) {
        for (size_t j = 0; j < A[0].size(); ++j) {
            resultado[j][i] = A[i][j];
        }
    }
    imprimirMatriz(resultado);
}

int main() {
    int aw, ah, bw, bh;
    std::cin >> aw >> ah;

    std::vector<std::vector<int>> A(aw, std::vector<int>(ah, 0));
    for (int i = 0; i < aw; ++i) {
        for (int j = 0; j < ah; ++j) {
            std::cin >> A[i][j];
        }
    }

    std::cin >> bw >> bh;
    std::vector<std::vector<int>> B(bw, std::vector<int>(bh, 0));
    for (int i = 0; i < bw; ++i) {
        for (int j = 0; j < bh; ++j) {
            std::cin >> B[i][j];
        }
    }

    std::string operacion;
    while (std::cin >> operacion) {
        if (operacion == "SUMA") {
            suma(A, B);
        } else if (operacion == "RESTA") {
            resta(A, B);
        } else if (operacion == "MULTIPLICACION") {
            multiplicacion(A, B);
        } else if (operacion == "TRASPUESTA") {
            traspuesta(A);
        } else {
            break;
        }
    }

    system("pause");
    return 0;
}