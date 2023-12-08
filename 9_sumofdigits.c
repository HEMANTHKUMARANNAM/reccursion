// Given a number, we need to find sum of its digits using recursion.
// Examples: 
// Input : 12345
// Output : 15

// Input : 45632
// Output :20



#include<stdio.h>
#include<stdlib.h>

int sum_digi( int x)
{
    if( x==0)
    {
        return 0;
    }
    return( sum_digi( x/10 ) + x%10  );
}

int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    printf("SUM = %d\n", sum_digi(a) );
    return 0;
}

