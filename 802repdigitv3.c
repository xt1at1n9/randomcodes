#include <stdio.h>

int main()
{
	printf("----------hello world----------\n");
    int digit,j,k;
    int array[10]={0,0,0,0,0,0,0,0,0,0};
    long int n;
    
    printf("enter number: ");
    scanf("%ld",&n);
    
    while(n>0) {
        
        digit = n%10;
        
        n = n/10;
        
        array[digit] = array[digit] + 1;
    }
    
    printf("Digits:\t\t");
    for(j=0;j<10;j++) {
        printf("%d\t",j);
    }
    
    printf("\nOccurences:\t");
    for(k=0;k<10;k++) {
        printf("%d\t",array[k]);
    }
    
    printf("\n\n");
    main();
}
