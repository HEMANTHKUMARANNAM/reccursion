//Given a number n, find sum of first n natural numbers. 
//To calculate the sum, we will use a recursive function recur_sum().

#include<stdio.h>
#include<stdlib.h>


int sum(int n) 
{
    if(n ==1)
    {
        return 1;
    }
    return sum(n-1)+n;
}


int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    printf("SUM = %d\n", sum(a));
    return 0;
}