// grntf.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define NOME_FICHEIRO "dados.txt"

int main(int argc, char* argv[])
{
	FILE *f;
	int i, quantidadeNumeros, numero;
	f = fopen(NOME_FICHEIRO, "w");
	printf("Qual a quantidade de numeros?");
	scanf("%d", &quantidadeNumeros);
	for (i = 0; i < quantidadeNumeros; i++){
		printf("Introduza um numero:");
		scanf("%d", &numero);
		fprintf(f, "%d\n", numero);
	}

	fclose(f);
	return 0;
}

