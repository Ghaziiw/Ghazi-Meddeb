#include <stdio.h>
#include <string.h>
#include <ctype.h>
void main()
{ 
char CH[100]; 
int i,j;
// Saisie une chaine de caractère non vide
do 
    {
    printf("Introduisez une phrase : ");
    gets(CH);
    }
while(strlen(CH)==0);
i=0;
while(CH[i])
    { 
        if(isspace(CH[i]))//detection d'espace
    { 
        j=i+1;
        while(isspace(CH[j]))
        {
            j++;//dépassement des espaces
        }
    if(j>i+1)
    strcpy(CH+i+1,CH+j);//effacer les espaces
    } 
    i++;
    } 
printf("Chaine apres suppression :%s:",CH);
}