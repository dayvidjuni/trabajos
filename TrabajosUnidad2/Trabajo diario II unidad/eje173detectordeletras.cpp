/* 11396. Detector de letras
-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>
#include <cctype>

char determinarTipoLetra(char letra) {
    if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') return 'V';
    else if (letra == 'Y') return 'S';
    else if (std::isalpha(letra)) return 'C';
    else return '\0';
}

int main() {
    int letrasLeidas = 0;
    char letra;

    while (letrasLeidas < 10) {

        std::cin >> letra;

        char tipoLetra = determinarTipoLetra(letra);

        if (tipoLetra != '\0') std::cout << tipoLetra << std::endl;

        if (tipoLetra != '\0') letrasLeidas++;
    }

    system("pause");
    return 0;
}
