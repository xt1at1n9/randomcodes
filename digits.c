1#include <stdio.h>

int main()
{
	int num;
	printf("enter number\n");
	scanf("%d",&num);
	if(num>=0&&num<10)
	{
		printf("This number has 1 digit");
	}
	if(num>9&&num<100)
	{
		printf("This number has 2 digits");
	}
	if(num>99&&num<1000)
	{
		printf("This number has 3 digits");
	}
}
