#include<stdio.h>
int main()
{
    //program to check whether a given year is leap year or not
    int a;
    printf("Enter the desired year:");
    scanf("%d",&a);
    if(a%4 ==0)
    {
        printf("Given year is a leap year");
    }
    else
    {
        printf("Given year is not a leap year");
    }
    return 0;
}
