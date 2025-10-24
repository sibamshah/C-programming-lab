#include<stdio.h>
int main()
{
	int a;
	printf("enter the temperature in degree celcius");
	scanf("%d",&a);
	if(a>60 && a<=80)
	{
		printf("safe range");
	}
	else
	{
		printf("warning");
	}
	return 0;
}
