// Strings.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"      /*ficheiro com definições do Windows*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

#define MAX_PAL 20

/*Série de Exercicios 1 - Ex1*/

int main(){
	char palavra1[MAX_PAL];
	int i;

	setlocale(LC_ALL, "Portuguese");

	printf("Introduza uma palavra:\n");
	scanf("%s", palavra1);

	i = 0;
	while (palavra1[i] != '\0')
	{
		i++;
	}

	printf("A palavra tem %d carateres\n", i);


	system("pause");
	return 0;
}
