#include <stdio.h>


void pasaMinuscula(char texto[]);

int main() {
    char cadena[100];

    printf("\nmiau\n");
    printf("\nno me gustan las mayúsculas. si me escribís algo en mayúscula, lo pasaré a minúsculas:\n\n");

    printf("¿querés probar?: ");
    fgets(cadena, 100, stdin);

    pasaMinuscula(cadena);

    printf("\nte lo dije. ahora acá te va en minúscula: %s\n", cadena);

    return 0;
}

void pasaMinuscula(char texto[]) {
    int i = 0;  /*Recorredor del string*/
    while (texto[i] != '\0') {
        if (texto[i] >= 'A' && texto[i] <= 'Z') {
            texto[i] = texto[i] + 32;   /*Por el abecedario ASCII*/
        }
        i += 1;
    }
}
