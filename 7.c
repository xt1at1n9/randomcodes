#include <stdio.h>

int main()
{
	int dollars, twenties, tens, fives, ones, remainder;
	
	printf("amount: ");
	scanf("%d",&dollars);
	
	twenties = dollars/20;
	remainder = dollars%20;
	
	tens = remainder/10;
	remainder = remainder%10;
	
	fives = remainder/5;
	remainder = remainder%5;
	
	ones = remainder;
	
	printf("%d twenties %d tens %d fives %d ones",twenties,tens,fives,ones);
	
	printf("\n\n\n");
	main();
}
