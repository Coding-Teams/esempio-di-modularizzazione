/*
 * main.c
 *
 *  Created on: 21 apr 2021
 *      Author: Piersilvio spicoli
 */

//includiamo le librerie standard
#include <stdio.h>
#include <stdlib.h>

//includiamo il file header delle funzioni
#include "funzioni.h"

int main(){

	setbuf(stdout, NULL);

	//variabili in input
	int a = 0, b = 0;

	//variabili di riutilizzo nelle funzioni
	int quad = 0, cub = 0;
	int prod = 0, somm = 0;
	int ris = 0, tipo = 0;

	puts("calcolo (a^2 * b) - (a + b^3)\n");
	puts("inserire il numero a: ");
	scanf("%d", &a);
	puts("inserire il numero b: ");
	scanf("%d", &b);

	quad = quadrato(a);
	cub = cubo(b);

	prod = prodotto(quad, b);
	somm = somma(a, cub);

	ris = sottrazione(prod, somm);

	printf("_> risultato: %d\n", ris);
	tipo = dispari_pari(ris);

	//stampiamo un messaggio
	controllo_pariDisp(tipo);

	return 0;
}
