#include <stdio.h>

int main()
{
    int a,b,big,i,ans,rest;
    printf("enter 2 integers:  ");
    
    scanf("%d%d",&a,&b);
    
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
    
    printf("The HCF of the 2 numbers is %d",i);
    
    printf("\n\n");

    main();

}
