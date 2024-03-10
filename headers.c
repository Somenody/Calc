#include <stdio.h>
int add(int int1, int int2)
{
	return int1 + int2;
}
int sous(int int1, int int2)
{
	return int1 - int2;
}
int diviser(int int1, int int2)
{
	return int1 / int2;
}
int mult(int int1, int int2)
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
