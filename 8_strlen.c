//Given a string calculate length of the string using recursion. 

#include<stdio.h>
#include<stdlib.h>

int len( char* str )
{
    if( *str == NULL )
    {
        return 0;
    }

    return( len( str+1) + 1 );

}

int main()
{
    char str[100];
    printf("Enter a string : ");
    gets(str);
    printf("LENGTH : %d\n", len(str)  );
    return 0;
}