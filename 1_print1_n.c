// You are given an integer N. Print numbers from 1 to N without the help of loops.

#include<stdio.h>

void print(int a)
{
    if(a== 0)
    {
        return ;
    }
    print(a-1);
    printf("%d ", a);
}


int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    print(a);
    return 0;
}