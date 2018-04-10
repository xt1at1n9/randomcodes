#include <stdio.h>

int main()
{
    int i1,i2,i3,i4,l,s,temp;
    printf("enter 4 integers:\n");
    scanf("%d %d %d %d",&i1,&i2,&i3,&i4);
    
    if(i1>i2) {
        l=i1;
        s=i2;
    }
    else {
        l=i2;
        s=i1;
    }
    
    if(s>i3) {
        s=i3;
    }
    else if(l<i3) {
        l=i3;
    }
    
    if(s>i4) {
        s=i4;
    }
    else if(l<i4) {
        l=i4;
    }
    
    
    printf("Largest: %d\nSmallest: %d",l,s);
    
    printf("\n\n");
    
    main();
}
