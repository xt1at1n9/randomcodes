#include <stdio.h>

int main()
{
	printf("----------hello world----------\n");
    int n,digit,j,count=0;
    int array[10]={0,0,0,0,0,0,0,0,0,0};
    
    printf("enter number: ");
    scanf("%d",&n);
    
    while(n>0) {
        
        digit = n%10;
        
        n = n/10;
        
        array[digit] = array[digit] + 1;
    }
    
    printf("Repeated digits:");
    
    for(j=0;j<10;j++) {
        
        if(array[j]>1) {
            printf("  %d",j);
            count+=1;
        }
    }
    
    if(count==0) {
        printf(" none");
    }
    
    printf("\n\n");
    main();
}
