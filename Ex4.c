#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char ch[100];
    do
    {
    printf("donner une chaine : ");
    gets(ch);
    }
    while(strlen(ch)==0);//insertion de ch
    int i,k ;
    i=0;
    int t=strlen(ch)-1;
    for(i;i<=t-1;i++)
    {
        //suppression des caracteres non alphabétiques
        while(isalpha(ch[i])==0 && ch[i]!=ch[t])
        {
            for(k=i;k<=t;k++)
            {
                ch[k]=ch[k+1];
            }
        }
    }
    puts(ch);
    char res[100];
    char voyellemaj[]="AEIOUY";
    char consnmaj[]="BCDFJKLMNPQRSTVWXZ";
    char voyellemin[]="aeiouy";
    char consnmin[]="bcdfjklmnqprstvwxz";
    k=0;
    for(i=0;i<strlen(ch);i++)//consonnes majiscules
    {
        if(strchr(consnmaj,ch[i])!=0)
        {
            res[k]=ch[i];
            k++;
        }
    }
    for(i=0;i<strlen(ch);i++)//voyelles majiscules
    {
        if(strchr(voyellemaj,ch[i])!=0)
        {
            res[k]=ch[i];
            k++;
        }
    }
    for(i=0;i<strlen(ch);i++)//consonnes miniscules
    {
        if(strchr(consnmin,ch[i])!=0 )
        {
            res[k]=tolower(ch[i]);
            k++;
        }
    }
    for(i=0;i<strlen(ch);i++)//voyelles majiscules
    {
        if(strchr(voyellemin,ch[i])!=0)
        {
            res[k]=tolower(ch[i]);
            k++;
        }
    }
    puts(res);
    return 0;
}