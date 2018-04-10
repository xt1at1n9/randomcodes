#include <stdio.h>
#include <stdbool.h>

int main()
{
    int digit_seen[10];
    digit_seen[0]=1;
    int digit,boolean=0;
    long n;
    
    printf("Enter a number:  ");
    scanf("%ld",&n);
    
    while (n>0)
    {
        digit = n%10;
        n /= 10;
        if(digit_seen[digit]!=digit)
            digit_seen[digit] = digit;
        else if(digit_seen[digit]==digit)
            boolean = 1;

    }
    
    if(boolean==1)
        printf("Repeated digit\n");
    else
        printf("No repeated digit\n");
        
    main();
}