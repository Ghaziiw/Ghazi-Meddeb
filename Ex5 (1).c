#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//ce programme cherche le nombre d'occurences d'un mot dans une chaine
int main()
{
    char phrase[100],mot[100];
    do{
    printf("saisir une phrase:");gets(phrase);
    }
    while (strlen(phrase)==0);//saisie de phrase non nulle
    do{
    printf("saisir un mot:");gets(mot);
    }
    while (strlen(mot)==0 && strlen(mot)>strlen(phrase));//saisir un mot non null
    toupper(phrase);//mot majiscule
    toupper(mot); // mot majiscule
    int a=strlen(phrase)-strlen(mot);
    int nb=0,i=0;
    for(i=0;i<a;i++){
        if (strncmp(mot,phrase+i,strlen(mot))==0){//recherche mot dans phrase
            nb++;//incrémentation de nombre occurences
            i=i+strlen(mot)-1;//dépassement des lettres restants du motd
        }
    }
    printf("le mot existe %d fois dans la phrase",nb);
}