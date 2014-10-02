// Strings.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX_PAL 100


int main()
{

	setlocale(LC_ALL, "Portuguese");

	char david[MAX_PAL];
	char david2[MAX_PAL];
	strcpy(david, "vidigueira larga o osso,");
	strcpy(david2, "está na hora do almoço!");

	printf("%s %s \n", david, david2);
	system("pause");



	return 0;
}
