// Strings.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX_PAL 100


#include "stdafx.h"      /*ficheiro com definições do Windows*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

#define MAX_PAL 20

int main(){
	char palavra1[MAX_PAL];
	char palavra2[MAX_PAL];

	setlocale(LC_ALL, "Portuguese");

	printf("Introduza uma palavra:\n");
	scanf("%s", palavra1);
	printf("Introduza outra palavra:\n");
	scanf("%s", palavra2);

	if (strcmp(palavra1, palavra2) == 0)
		printf("São iguais!\n");
	else
		printf("São diferentes!\n");

	system("pause");

	return 0;
}
