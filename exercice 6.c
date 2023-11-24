#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
// ce programme permet d'effacer les blancs avant et après une chaine
int main()
{
    char ch[100];
    int i;
    printf("donner la chaine : \n");
    gets(ch);//saisie de ch
    printf("\n\"%s\"\n",ch);
    while(ch[0]==' ')//si début de chaîne vide
    {
        for(i=0;i<strlen(ch);i++)
        {
            ch[i]=ch[i+1];//effacement des vides avant cv
        }
    }
    while(ch[strlen(ch)-1]==' ')
    {
        ch[strlen(ch)-1]=ch[strlen(ch)];//effacement des vides après ch
    }
    printf("\n\"%s\"\n",ch);
    return 0;
}