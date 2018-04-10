#include <stdio.h>

int main()
{
    int num,den,fact;
    printf("enter fraction:  ");
    scanf("%d/%d",&num,&den);
    
    fact = hcf(num,den);
    
    num = num/fact;
    den = den/fact;
    
    printf("Result: %d/%d",num,den);
    
    printf("\n\n");
    
    main();
}


int hcf(int a, int b)
{
    int big,i,ans,rest;
    
    if(a>b)
        big=b;
        else
            big=a;
    
    for(i=big;i>1;i--) {
        if(a%i==0&&b%i==0)
        {
            ans = i;
            break;
        }
    }

    return ans;

}