#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
//c'est programme c'est demande à l'utilisateur de saisir la longueur d'un tableau
//puis le remplir par des chaînes de caractères
//il éfface ensuite les caractères non numériques
//et calculer puis affiche la somme des châines formées (après les transformer en entiers)

{
    int n,i,j,k,l ;
    do
    {
        printf("donner n : \n");//longuer de tableau
        scanf("%d",&n);
    }
    while(n<2 || n>20);
    char t[n][100];
    getchar();
    for (i=0;i<n;i++)
    {
        do
        {
            printf("t[%d]=",i);
            gets(t[i]);//remplissage
        }
        while(strlen(t[i])>10);
    }
    for(i=0;i<n;i++)//effacer les non-numeriques
    {
        for(j=0;j<=strlen(t[i]);j++)
        {
            while((isdigit(t[i][j]))==0 && t[i][j]!=t[i][strlen(t[i])])
            {
                for (k=j ; k<=strlen(t[i]);k++)
                {
                    t[i][k]=t[i][k+1];
                }
            }
        }
    }
    int s = 0;
    for(l=0;l<n;l++)
    {
        if(strlen(t[l])!=0)
        {
            s = s + atoi(t[l]);//sommer (après transformation en entiers)
        }
    }
    printf("\n la somme est : %d",s);//affichage de la somme
    return 0;
}