#include <stdio.h>
int main() 
{
    
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    // Logic to check the number
    
    // Check if the number is greater than 0

    if (a > 0) 
    {
        printf("The number %d is Positive.\n", a);
    }

    // If not positive, check if the number is less than 0

    else if (a < 0)
    {
        printf("The number %d is Negative.\n", a);
    }

    // If it's neither greater than 0 nor less than 0, it must be 0
    else
    {
        printf("The number is Zero.\n");
    }

    return 0;
}
