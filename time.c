#include <stdio.h>

int main()
{
	int hr, min;
	printf("enter 24 hr time (hh:mm) : ");
	
	scanf("%d:%d",&hr,&min);
    
    if(hr>=24||min>59)
    printf("Invalid format!! Please try again.");
    
    else
    if(hr==12)
    printf("%d:%d PM",hr,min);
        
    else
    if(hr>12)
    printf("%d:%d PM",hr-12,min);
        
    else
    if(hr==0)
    printf("%d:%d AM",hr+12,min);
        
    else
    printf("%d:%d AM",hr,min);
        
    
		
    printf("\n\n\n");
	main();

}
