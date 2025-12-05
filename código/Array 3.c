#include <stdio.h>
#include <stdlib.h>     /*nos permite dar uso a la función rand y srand*/
#include <time.h>       /*nos permite manejar tiempo, siendo en este caso NULL(tiempo actual)*/

#define TAMVEC 50
#define MIN 10

int contarMayor(int vec[], int tam);

int main() {
	int vector[TAMVEC];

	srand(time(NULL));      /* el tiempo actual cambia cada segundo, así que nunca tendremos una semilla igual*/

	printf("\nMiau\n");
	printf("\nSoy el señor aleatorizador de números. Te diré 50 números vectores aleatorios entre 20 y 10 y de paso te diré cuántas veces se repite el mayor entre ellos. Intenta\n\n");

	for (int i = 0; i < TAMVEC; i++) {
		vector[i] = rand() % (MIN + 1) + MIN;   /*calcula el residuo del número generado por rand*/
		printf("vector[%d] = %d\n", i + 1, vector[i]);
	}

	int repite = contarMayor(vector, TAMVEC);
	printf("\nEl numero mayor se repite %d veces.\n", repite);
	return 0;
}

int contarMayor(int vec[], int tam) {
	int mayor = vec[0];     /*empezamos con número mayor 0, pero este cambiará eventualmente*/
	int rep = 0;

	for (int i = 1; i < tam; i++) {
		if (vec[i] > mayor) {
			mayor = vec[i];
		}
	}
	
	for (int i = 0; i < tam; i++) {
		if (vec[i] == mayor) {  /*si un número de los que sale es igual al mayor, suma una repetición*/
			rep++;
		}
	}
	return rep;
}
