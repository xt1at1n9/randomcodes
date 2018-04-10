#include <stdio.h>

int main()
{
	int a;
	char date[11];
	printf("enter date (dd/mm/yyyy): ");
	scanf("%s",&date);
	
	for(a=2;a<strlen(date);a++)
	{
		date[a]=date[a+1];
	}
	for(a=4;a<strlen(date);a++)
	{
		date[a]=date[a+1];
	}
	
	puts(date);
	
	
	printf("\n\n\n");
	
	main();
}
