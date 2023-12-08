//Print reverse of a string using recursion

#include<stdio.h>
#include<string.h>

void revstr(char* str , int x)
{
    if( x <0)
    {
        printf("\n");
        return;
    }
    printf("%c", str[x]);
    revstr(str, x-1);
}

int main()
{
    char str[100];
    printf("Enter a string : ");
    gets(str);
    revstr(str , strlen(str)-1 );
    return 0;
}