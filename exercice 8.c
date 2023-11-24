#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//ce programme effaces les lettres qui se répètent
//consécutivement
int main()
{
    char ch[100];
    char c;
    int i=0;
    int a,b ;
    printf("donner une chaine : \n");
    gets(ch);//insertion
    for(b=0;b<strlen(ch);b++)
    {
        c=ch[i];
        while(ch[i+1]==c)//une lettre se répète
        {
            for(a=i+1;a<strlen(ch);a++)
            {
                ch[a]=ch[a+1];//effacer les repetitions
            }

        }
        i++;
    }
    puts(ch);
    return 0;
}