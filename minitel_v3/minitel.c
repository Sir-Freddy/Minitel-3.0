#include "lib/src/my.h"
#include <string.h>

char user[20] = {0};
int choix = 0;

int main() {
    system("clear");
    system("./sh/update.sh");
    system("clear");

    printf("\nAvec quel nom d'utilisateur voulez-vous vous connecter ?\n");
    scanf("%s", user);

    int b = 1;

    while(b){
        system("clear");
        printf("\nBienvenue %s !\n", user);
        
        printf ("1. Informations générales \n");
        printf ("2. Réseaux \n");
        printf ("3. Processus \n");
        printf ("4. Paquets \n");
        printf ("5. Exit \n");
        printf ("\nChoisissez en tapant le chiffre correspondant puis appuyez sur ENTER.\n");

        scanf("%d", &choix);

        if(choix == 1 ) {
            system("clear");
            printf("Informations générales \n");
            printf("Choix 1 \n");
			system("./sh/info.sh");
        }
        
        else if(choix == 2) {
            system("clear");
            printf("Réseau \n");
            printf("Choix 2 \n");
            system("./sh/res.sh");
        }
        else if(choix == 3) {
            system("clear");
            printf(" Processus \n");
            printf("Choix 3 \n");
			system("./sh/processus.sh");
        }
        
        else if(choix == 4) {
            system("clear");
            printf("\n Packages \n");
            printf("Choix 4 \n");
			system("./sh/pack.sh");
        }
        else if(choix == 5) {
            system("clear");
            b = 0;
            printf("\n=======================================\n");
            printf("| Merci d'avoir utilisé Minitel 3.0 ! |\n");
            printf("=======================================\n");
        }
        else {
            system("clear");
            printf("\nChoix incorrect !\n Veuillez entrer un choix valide.\n\n");
            sleep(2);
        }
    }
    return 0;
}
