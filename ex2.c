#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
    char txt[200] ;
    do
    {
        printf("donner une chaine qui ne depasse pas 200 cactrs : \n");
        gets(txt);//insertion de txt
    }
    while(strlen(txt)>200 || strlen(txt)<0);
    printf("\nla chaine initial est : \"%s\" \n",txt);
    int p,i;
    while(strchr(txt,'e')!=0)
    {
        p=(strchr(txt,'e')-strchr(txt,txt[0]));
        printf("%d\t",p);
        for (i=p;i<strlen(txt);i++)
        {
            txt[i]=txt[i+1];//effacement des 'e' dans txt
        }
    }

    printf("\nla chaine final est : \"%s\" \n",txt);
}