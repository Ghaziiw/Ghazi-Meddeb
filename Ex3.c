#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char ch1[100],ch2[100],ch3[100]="";
    printf("donner la premiere chaine ch1 : \n");
    gets(ch1);
    printf("donner la deuxieme chaine ch2 : \n");
    gets(ch2);
    int n1=strlen(ch1)/2;
    int n2=strlen(ch2)/2;
    strncpy(ch3,ch1,n1);
    strncat(ch3,ch2,n2);
    puts(ch3);
}