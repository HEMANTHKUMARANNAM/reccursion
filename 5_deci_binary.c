// Given a decimal number as input, 
//we need to write a program to convert the given decimal number into an equivalent binary number. 
// Examples : 
// Input : 7                                                         
// Output :111
// Input :10
// Output :1010

#include<stdio.h>
#include<stdlib.h>

int binary(int x)
{
    if(x == 1)
    {
        return 1;
    }

    return( binary(x/2)*10 + x%2 );
}

int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    printf("BINARY = %d\n", binary(a) );
    return 0;
}

