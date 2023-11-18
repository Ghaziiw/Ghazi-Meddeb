#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// ce programme lit une ligne de caractères puis
// affiche le nombre d'ocurrences de 'e' dans cette chaine,
// affiche la chaîne telle qu'elle est puis l'affiche inversée
void main() {
    char txt[200],txinv[200];
    printf("écrire la ligne de texte:");gets(txt);
    printf("la longueur de la chaine est %d",strlen(txt));
    int i=0,j=0;//déclaration des compteurs
    for(i=0;i<strlen(txt);i++){
    // calcul des nombres d occurence de e
        if (txt[i]=='e'){
            j++;
            }
    }
    printf("\n'e' se trouve %d fois dans le texte\n",j);
    puts(txt);//affichage de le chaîne telle qu'elle est
    for(i=0;i<strlen(txt);i++);
    printf("le texte inversé est :",strrev(txt));
}
    