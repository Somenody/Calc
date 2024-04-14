#include <stdio.h>
#include "headers.h"
float add(float fl1,float fl2)
{
	return fl1 + fl2;
}
float sous(float fl1,float fl2)
{
	return fl1 - fl2;
}
float diviser(float fl1,float fl2)
{
	return fl1 / fl2;
}
float mult(float fl1,float fl2)
{
	return fl1 * fl2;
}
void espace()
{
	printf("\n");
}
void showtab(char arrname[], int size)
{
	for(int i = 0; i < size; i++) {
		printf("%c", arrname[i]);
	}
	espace();
}
