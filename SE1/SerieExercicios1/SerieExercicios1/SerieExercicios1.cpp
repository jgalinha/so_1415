// SerieExercicios1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX_PAL 20

int main(int arg, char* argv[]){
	char ficheiro[MAX_PAL];
	char ext[4];
	int i = 0;
	int x = 0;
	bool control = false;

	setlocale(LC_ALL, "Portuguese"); 
	printf("Introduza uma palavra:\n");
	scanf("%s", ficheiro);

	while (ficheiro[i] != '\0')
	{
		if (control == true)
		{
			printf("%c", ficheiro[i]);
		}
		if (ficheiro[i] == '.')
		{
			control = true;
		}
		i++;
	}
	printf("\n");
	system("pause");
	return 0;

	/////////////////////////////
	// EX2
	/////////////////////////////
	//char palavra1[MAX_PAL];
	//char palavra2[MAX_PAL];
	//int i;

	//setlocale(LC_ALL, "Portuguese"); 
	//printf("Introduza uma palavra:\n");
	//scanf("%s", palavra1);
	//printf("Introduza outra palavra:\n");
	//scanf("%s", palavra2);

	////Enquanto n�o chegarmos ao fim de uma das palavras avan�amos
	////nas posi��es dos vectores
	//i = 0;
	//while ((palavra1[i] != '\0') && (palavra2[i] != '\0') &&
	//	((palavra1[i] == palavra2[i])))
	//	i++;

	////Se a �ltima posi��o de ambos os vectores 
	////contiver o \0 ent�o as palavras s�o iguais
	////sen�o s�o diferentes
	//if ((palavra1[i] == '\0') && (palavra2[i] == '\0'))
	//	printf("S�o iguais!\n");
	//else
	//	printf("S�o diferentes!\n");

	//system("pause");
	//return 0;
}
