/* 11335. Dos gatos y un ratón
-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include<bits/stdc++.h>

int main() {
    int a, b, c;
    scanf("%d %d %d\n", &a, &b, &c);

    if (abs(c - a) == abs(c - b))
        printf("raton C\n");
    else if (abs(c - a) < abs(c - b))
        printf("gato A\n");
    else if (abs(c - a) > abs(c - b))
        printf("gato B\n");

    system("pause");
    return 0;
}
