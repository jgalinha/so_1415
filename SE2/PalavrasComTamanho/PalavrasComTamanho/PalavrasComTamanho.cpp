// PalavrasComTamanho.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <locale.h>
#include <string.h>
#include <stdlib.h>

#define MAX_WORD 20

int main(int argc, char* argv[])
{
	FILE *f;
	int i;
	char c[MAX_WORD];
	setlocale(LC_ALL, "Portuguese");

	i = 0;
	f = fopen(argv[1], "r");
	
	while (fscanf(f, "%s", c) != EOF) {
		if (strlen(c) == atoi(argv[2])) {
			i++;
		}
	}

	fclose(f);
	printf("-> %d", i);

	return 0;
}

