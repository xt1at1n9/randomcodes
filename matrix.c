#include <stdio.h>

int main()
{
	int array[16], count;
	printf("enter 16 numbers: \n");
	
	for(count=0;count<16;count++)
		scanf("%d",&array[count]);
		
	for(count=0;count<16;count++)
	{
		printf("%2d\t",array[count]);
		
		if((count+1)%4==0)
			printf("\n");
	}
	
	
	printf("\n\n\n");
	
	main();
}
