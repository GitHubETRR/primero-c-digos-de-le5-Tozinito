#include <stdio.h>
#define TAMVEC 7

int sumaVector(int vec[], int tam);

int main() {
	int vector[TAMVEC];
	int resultado = 0;
	printf("Miau");
	printf("\nBienvenido. Soy el mago sietematemático.  Dame 7 números y te daré su sumatoria como si de una calculadora se tratase\n");
	for(int i = 0; i < TAMVEC; i++) {
		printf("\nDame Número %d\n", i + 1);
		scanf("%d", &vector[i]);
	}
	resultado = sumaVector(vector, TAMVEC);
	printf("\nAbracadabra, patas de cabra. La sumatoria de tus números es:%d", resultado);
	return 0;
}

int sumaVector(int vec[], int tam) {
	int suma = 0;
	for(int i = 0; i < tam; i++) {
		suma += vec[i]; /*lo mismo que escribir suma=suma+vec[i], pero más fancy*/
	}
	return suma;
}
