/*7294. ¿Cuántos valen 7?
-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <stdio.h>

int main() {
    int a, b = 0;

    for (int i = 0; i < 2; i++) {
        scanf("%d", &a);

        if (a == 7) {
            b++;
        }
    }

    printf("%d", b);

    return 0;
}
