#include <stdio.h>
#include "headers.h"
float add(int int1, int int2)
{
	return int1 + int2;
}
float sous(int int1, int int2)
{
	return int1 - int2;
}
float diviser(int int1, int int2)
{
	return int1 / int2;
}
float mult(int int1, int int2)
{
	return int1 * int2;
}
void showtab(char arrname[], int TABSIZE)
{
	for(int i = 0; i < TABSIZE; i++) {
		printf("%c", arrname[i]);
	}
	printf("\n");
}
