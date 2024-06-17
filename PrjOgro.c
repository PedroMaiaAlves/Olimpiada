/*
 ============================================================================
 Name        : PrjOgro.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n;
	printf("Digite o número que o ogro exibirá : ");
	scanf("%d", &n);

	if (n < 0 || n > 10) {
		printf("\n O ogro só exibe números de 0 a 10, esse número não pertence ao intervalo dito.");
		return 1;
	}

	//Primeira Mão
	if (n <= 5) {
		for (int i = 0; i < n; i++) {
			printf("I");
		}
		if (n == 0) {
			printf("*");
		}
		printf(" ");
	} else {
		for (int i = 0; i < 5; i++) {
			printf("I");
		}
		printf(" ");


    //Segunda Mão
	}
	if (n <= 5) {
		printf("*\n");
	} else {
		for (int i = 0; i < (n - 5); i++){ //Código para imprimir os dedos da segunda mão (n - 5)
			printf("I");
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
