#include <stdio.h>


void Invertir(char origen[], char destino[]);   /*toma de origen, escribe en destino*/

int main() {
    char cadena[100], invertida[100];

    printf("\nuaiM\n");
    printf("\n ejej ,séver la érdnop ol sagid em euq ol odot y ,séver led erbmoh le yoS\n");
    printf("(Soy el hombre del revés, y todo lo que me digas lo pondré al revés, jeje)\n\n");
 

    printf(" ?ratnetni séreuQ¿\n\n");
    printf("(¿Querés intentar?):\n\n");
    fgets(cadena, 100, stdin);

    Invertir(cadena, invertida);

    printf("\n ámoT\n");
    printf("(Tomá):%s\n\n", invertida);
    return 0;
}

void Invertir(char origen[], char destino[]) {
    int len = 0;

    while (origen[len] != '\0' && origen[len] != '\n') {
        len += 1;
    }

    for (int i = 0; i < len; i++) {  /*i aumenta hasta que haya un \0 o \n*/
        destino[i] = origen[len - 1 - i];    /*len - 1 - i hace que según aumente i nos movamos hacía atras en las letras*/
    }

    destino[len] = '\0';
}
