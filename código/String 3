#include <stdio.h>


void pasaMinuscula(char texto[]);
int vocales(char texto[]);

int main() {
    char cadena[100];

    printf("\nmiau\n");
    printf("\nno me gustan las mayúsculas, y si me decís algo con mayúsculas, lo pasaré a minúsculas, pero como hoy me siento generoso te contaré sus vocales también\n\n");

    printf("probá, dale");
    fgets(cadena, 100, stdin);

    pasaMinuscula(cadena);

    int cantVocales = vocales(cadena);

    printf("\nacá lo tenés en minúsculas %s", cadena);
    printf("y acá la cantidad de vocales%d\n", cantVocales);

    return 0;
}

void pasaMinuscula(char texto[]) {
    int i = 0;
    while (texto[i] != '\0') {
        if (texto[i] >= 'A' && texto[i] <= 'Z') {
            texto[i] = texto[i] + 32;
        }
        i += 1;
    }
}
