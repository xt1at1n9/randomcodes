#include <stdio.h>

#define INITIAL_BALANCE 100.00;

int main()
{
	int i, rate, num_years, year;
	double value[5];
    
    printf("Enter interest rate: ");
    scanf("%d",&rate);
    printf("Number of years: ");
    scanf("%d",&num_years);
    
    printf("\nYears");
    for(i=0;i<5;i++) {
        printf("%d",rate + i);
        value[i] = INITIAL_BALANCE;
    }
    
    printf("\n");
    
    for(year=1;year<num_years;i++) {
        printf("%d  ", year);
        for(i=0;i<5;i++) {
            value[i] += (rate+1) /100.0 *value[i];
            printf("%.2f",value[i]);
        }
        
        printf("\n");
    }
    
    return(0);
}
