// CortaLinhas.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	FILE *f;
	int i, ln;
	setlocale(LC_ALL, "Portuguese");
	ln = 1;
	f = fopen(argv[1], "r");

	i = NumeroLinhaExisteArgv(ln, argc, argv);

	printf("-> %d", i);


	fclose(f);
	return 0;
}

int NumeroLinhaExisteArgv(int numeroLinha, int argc, char *argv[])
{
	int i = 0;
	if (argc >= numeroLinha)
	{
	}
	return i;
}

