/*
 ============================================================================
 Name        : PrjTorneioTenis.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char resultado;
	int vitorias = 0;
	int i = 0;

	printf("Digite V para jogo ganhou e P para jogo perdido.\n");
	for (i = 0; i < 6 ; i++) {
		fflush(stdout);
		scanf(" %c", &resultado);
		if (resultado == 'V') {
			vitorias += 1;
		}
	}
	if (vitorias == 5 || vitorias == 6) {
		printf("1");
	}
	if (vitorias == 3 || vitorias == 4) {
		printf("2");
	}
	if (vitorias == 1 || vitorias == 2) {
		printf("3");
	}
	if (vitorias == 0) {
		printf("-1");
	}

	return EXIT_SUCCESS;
}
