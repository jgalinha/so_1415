// CortaLinhas.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_LN 80

int NumeroLinhaExisteArgv(int numeroLinha, int argc, char *argv[]);

int main(int argc, char* argv[])
{
	FILE *f;
	int i, ln;
	char l[MAX_LN];
	setlocale(LC_ALL, "Portuguese");
	ln = 0;
	f = fopen(argv[1], "r");
	while (fgets(l, MAX_LN, f) != NULL) {
		if (NumeroLinhaExisteArgv(ln, argc, argv) == 0) {
			fputs(l, stdout);
		}
		ln++;
	}
	fclose(f);
	return 0;
}

int NumeroLinhaExisteArgv(int numeroLinha, int argc, char *argv[])
{
	int i = 0;
	for (int z = 2; z < argc; z++) {
		if (numeroLinha == atoi(argv[z])) {
			i = 1;
			break;
		}
	}
	return i;
}

