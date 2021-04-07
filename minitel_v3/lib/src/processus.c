#include "my.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* conc(char *str)
{
    char *full = malloc( 9 + strlen(str) );
    char *base = "kill -15 ";
    int i;
    int j;
    for (i = 0; i < strlen(base); i++)
    {
        full[i] = base[i];
    }
    for (j = 0; j < strlen(str); ++j)
    {
        full[i + j] = str[j];
    }
    return full;
}

void processus()
{
    int b = 1;
    while (b)
    {
        system("top -n 1");
        printf("=========================================================================================================================================\n");
        printf("Enter id of processus to terminate or quit.\n");
        char *str;
        scanf("%s", str);
        if (strcmp(str, "quit") != 0) {
            system("clear");
            char *command = conc(str);
            system(command);
            free(command);
            printf("===============================================================================================================================================\n");
        } else {
            b = 0;
            system("clear");
            printf("==============================================================\n");
            printf("| Merci d'avoir utilise minitel et passez une bonne journee. |\n");
            printf("==============================================================\n");
        }
    }
}