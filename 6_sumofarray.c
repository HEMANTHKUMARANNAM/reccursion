// Given an array of integers, find sum of array elements using recursion. 

// Examples: 

// Input : A[] = {1, 2, 3}
// Output : 6
// 1 + 2 + 3 = 6

#include<stdio.h>
#include<stdlib.h>

int sum( int *a , int n)
{
    if(n== 1)
    {
        return a[0];
    }

    return ( sum(a , n-1) + a[n-1] );
}

int main()
{
    int a[] = {1, 2, 3 , 9};
    printf("SUM = %d\n", sum(a ,  sizeof(a)/sizeof(a[0]) ) );
    return 0;
}