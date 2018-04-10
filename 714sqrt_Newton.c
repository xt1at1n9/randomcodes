#include <stdio.h>
#include <math.h>

int main()
{
    double x,y,avg,diff,product;
    printf("Enter number:  ");
    scanf("%lf",&x);
    
    y=1;
    avg=x;
    diff=x;
    while(diff>product)
    {
        avg = (y+x/y)/2.0;
        diff=fabs(y-avg);
        y=avg;
        product=.00001*y;
    }
    
    printf("Square root = %lf\n",avg);
    main();
}
