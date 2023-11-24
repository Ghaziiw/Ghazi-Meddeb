#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
//ce programme remplit un tableau par des chaînes de caractères
//puis efface les caractères non alphabétiquesde chaque chaîne
//et puis affiche les chaînes résultantes non vides avec leurs indices
{
    int n,i,j,k,p ;
    do
    {
        printf("donner n : \n");
        scanf("%d",&n);//insertion de N
    }
    while(n<2 || n>20);
    char t[n][100];
    getchar();
    for(int i=0;i<n;i++)
    {
        printf("t[%d] = ",i);
        gets(t[i]);//remplissage
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<=strlen(t[i]);j++)
        {
            while((isalpha(t[i][j]))==0 && t[i][j]!=t[i][strlen(t[i])])
            {
                for (k=j ; k<=strlen(t[i]);k++)
                {
                    t[i][k]=t[i][k+1];//supprimer les non alphabétiques
                }
            }
        }
    }
    for(p=0;p<n;p++)
    {
        if(strlen(t[p])!=0)
        {
            printf("%d\t%s\n",p,t[p]);//affichage
        }
    }
    return 0;
}