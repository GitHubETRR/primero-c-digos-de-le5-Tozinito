#include <stdio.h>
#define TAMVEC 4

int sumaVector(int vec[], int tam);
float promedioVector(int vec[], int tam);   /*float es para decimales*/

int main() {
    int vector[TAMVEC];
    printf("Miau");
    printf("\nSoy el promediador mágico, muejejeje. Si me das 4 números los promediaré al instante. Intentalo... Si te atreves\n");

    for(int i = 0; i < TAMVEC; i++) {
        printf("\nDame Número: %d\n", i + 1);
        scanf("%d", &vector[i]);
    }
    float promedio = promedioVector(vector, TAMVEC); 
    printf("\nTal y como dije, el promedio de tus números es: %.3f", promedio);     /*el.3f es cantidad de decimales en el float, siendo en este caso 3*/
    return 0;
}

int sumaVector(int vec[], int tam) {
    int suma = 0;
    for(int i = 0; i < tam; i++) {
        suma += vec[i];
    }
    return suma;
}
float promedioVector(int vec[], int tam) {
    int suma = sumaVector(vec, tam); /*reutilización de código. Toma el resultado de la suma y lo guarda hasta, en este caso, usarla en la siguiente operación*/
    return (float)suma / tam;
}
