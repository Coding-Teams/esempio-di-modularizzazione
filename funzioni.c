/*
 * funzioni.c
 *
 *  Created on: 21 apr 2021
 *      Author: Piersilvio spicoli
 */

//includiamo le librerie standard
#include <stdio.h>
#include <stdlib.h>
#include "funzioni.h"

int somma(int a, int b)
{
	return a + b;
}

int prodotto(int a, int b)
{
	return a * b;
}

int quadrato(int a)
{
	return a * a;
}

int dispari_pari(int a)
{
	int vero = 0; //0 = falso

	if(a % 2 == 0)
	{
		vero = 1; //il numero è pari
		return vero;

	}else
	{
		vero = -1; //il numero è dispari
		return vero;
	}
}

void controllo_pariDisp(int a)
{
	if(a == -1)
	{
		puts("_> il numero è dispari!");

	}else
	{
		puts("_> il numero è pari!");
	}
}

int sottrazione(int a, int b)
{
	return a - b;
}

float divisione(int a, int b)
{
	return a / b;
}

int cubo(int a)
{
	return a * a * a; //riutilizzo il quadrato per il suo cubo
}
