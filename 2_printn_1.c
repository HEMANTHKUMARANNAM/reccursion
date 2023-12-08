//You are given an integer N. Print numbers from N to 1 without the help of loops.


#include<stdio.h>

void print(int a)
{
    if(a== 0)
    {
        return ;
    }
    printf("%d ", a);
    print(a-1);
}


int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    print(a);
    return 0;
}