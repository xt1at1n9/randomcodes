#include <stdio.h>

int main()
{
    float num[50],large=0;
    int i=0;
    
    while(1) {
        printf("enter number:  ");
        scanf("%f",&num[i]);
        if(num[i]==0)
            break;
        else {
            if(num[i]>large)
                large = num[i];
            i++;
        }
        
    }
    
    printf("%.3f is the largest number.",large);
    
    printf("\n\n");
    
    main();
}