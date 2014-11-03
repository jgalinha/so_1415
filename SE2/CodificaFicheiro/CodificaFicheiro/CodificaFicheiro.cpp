// CodificaFicheiro.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <locale.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, char* argv[])
{
	FILE *f, *fw;
	int c, i;

	setlocale(LC_ALL, "Portuguese");

	if (strcmp(argv[3], "-c") == 0) {
		f = fopen(argv[1], "r");
		fw = fopen(argv[2], "w");
		i = 75;
	}
	else if (strcmp(argv[3], "-d") == 0) {
		f = fopen(argv[1], "r");
		fw = fopen(argv[2], "w");
		i = -75;
	}
	else
	{
		printf("error!");
		return -1;
	}
	if (argc == 4) {
		i = atoi(argv[4]);
	}
	c = fgetc(f);
	while (c != EOF){
		fputc(c + i, fw);
		c = fgetc(f);
	}

	fclose(f);
	fclose(fw);

	return 0;
}

