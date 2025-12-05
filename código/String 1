#include <stdio.h>
#include <string.h>

int Dimension(char texto[]);

int main() {
    char cad[999];  /*Largo de la cadena*/

    printf("Ingresá una palabra y te digo qué tan larga es \n");
    scanf("%1000s", cad);    /*Largo del scaneo (incluye el \0)*/

    int largo = Dimension(cad);

    printf("\nLargo de la cadena: %d\n", largo);

    return 0;
}

int Dimension(char texto[]) {
    return strlen(texto);    /*String Length*/
}
