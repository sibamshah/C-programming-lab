#include<stdio.h>
int main()
{
    float n,sum;
    printf("Enter the desired number:");
    scanf("%f",&n);
    sum=n*(n+1)/2;
    printf("Sum of the n natural number is:%f",sum);
    return 0;
}
