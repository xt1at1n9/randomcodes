#include <stdio.h>

int main()
{
   int c;
 
   printf("Number reverse: ");
   scanf("%d",&c);
   
   while (c!=0) {
	   printf("%d",c%10);
	   c = c/10;
   }
   
   printf("\n");
   
   main();
}
