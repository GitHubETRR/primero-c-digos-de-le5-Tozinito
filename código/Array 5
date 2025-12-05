#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMVEC 5

int vectorA[TAMVEC];
int vectorB[TAMVEC];

int productoEscalar();

int main() {
	srand(time(NULL)); /*¨hace que los vectores A y B nunca sean iguales*/

	printf("Miau\n");
	printf("\nSoy un genio matemático, y te puedo dar el resultado del producto escalar de los vectores A y B\n\n");

	printf("-Componentes del Vector A:\n");
	for (int i = 0; i < TAMVEC; i++) {
		vectorA[i] = rand() % (30 + 1) + 1;
		printf("A%d = %d\n", i + 1, vectorA[i]);
	}

	printf("\n-Componentes del Vector B:\n");
	for (int i = 0; i < TAMVEC; i++) {
		vectorB[i] = rand() % (30 + 1) + 1;
		printf("B%d = %d\n", i + 1, vectorB[i]);
	}

	int resultado = productoEscalar();
	printf("\n--El resultado del producto escalar entre los vectores A y B es igual a %d--\n", resultado);
	return 0;
}

int productoEscalar() {
	int total = 0;
	for (int i = 0; i < TAMVEC; i++) {
		total += (vectorA[i] * vectorB[i]);
	}
	return total;
}
