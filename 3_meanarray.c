//To find the mean of the elements of the array. 
#include<stdio.h>


float mean( int* a ,int  n)
{
    if(n==1)
    {
        return a[0];
    }
    return(  (float) ( (  mean(a , n-1)*(n-1) + a[n-1]  )/n )  );

}

int main()
{
    int a[] = { 3 ,3 ,9 , 9 , 9, 4 };

    printf("MEAN = %f\n",    mean(a, sizeof(a)/sizeof(a[0]) )    );

    return 0;
}