#include <stdio.h>
#include <stdlib.h>
#include "headers.h"

int main(int argc, char **argv) {
    float userint, userint1;
    char signe[4] = {'/', '*', '-', '+'};
    char usersigne;

    while (1) {
        printf("QUELLE EST VOTRE PREMIER NOMBRE ? : ");
        scanf("%f", &userint);
        printf("QUELLE EST VOTRE SECOND NOMBRE ? : ");
        scanf("%f", &userint1);
        fflush(stdin);
        showtab(signe, 4);
        printf("VEUILLEZ CHOISIR UNE OPERATION DISPONIBLE EN TAPANT LE SYMBOLE ET APPUYER SUR LA TOUCHE ENTREE ENSUITE : ");
        scanf(" %c", &usersigne);
        switch (usersigne) {
            case '+':
                printf("%f\n", add(userint, userint1));
                break;
            case '-':
                printf("%f\n", sous(userint, userint1));
                break;
            case '/':
                printf("%f\n", div(userint, userint1));
                break;
            case '*':
                printf("%f\n", mult(userint, userint1));
                break;
            default:
                puts("VOUS NE DEVEZ PAS SAISIR AUTRE CHOSE QUE LES SIGNES MATHEMATIQUES PROPOSEE");
                return EXIT_FAILURE;
        }
    }

    return EXIT_SUCCESS;
}
