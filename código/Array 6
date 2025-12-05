#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 20

void CargaVector(int v[], int n);
void InvertirVector(int origen[], int destino[], int n);
void MostrarVector(int v[], int n);

int main() {
    printf("Miau\n");
    printf("\nSoy el inversor y no de bitcoin. Yo invierto no en bolsa, pero sí tus vectores, y creeme que es super cool. Intentalo\n");
    
    int vectorA[TAM];
    int vectorB[TAM];

    srand(time(NULL)); 

    CargaVector(vectorA, TAM);
    InvertirVector(vectorA, vectorB, TAM);

    printf("\nTu vector es:\n");
    MostrarVector(vectorA, TAM);
    
    printf("\nY su versión invertida es:\n");
    MostrarVector(vectorB, TAM);
    return 0;
}

void CargaVector(int v[], int n) {
    for (int i = 0; i < n; i++) {
        v[i] = 20 + rand() % 71; 
    }
}

void InvertirVector(int origen[], int destino[], int n) {
    for (int i = 0; i < n; i++) {
        destino[i] = origen[n - 1 - i];
    }
}

void MostrarVector(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}
