#include <stdio.h>

int code() {
    int n,c,j,k;
    int i = 0;
    int a[10];
    
    printf("enter number to convert: ");
    scanf("%d",&n);
    
    printf("%d in binary is: ",n);
    
    c = n;
    
    while (c!=0) {
        a[i]=c%2;
        c = c/2;
        i++;
        if(c==0) {
            k = i-1;
        }
    }
    
    for(j = k;j>=0;j--)
    {
        printf("%d",a[j]);
    }
    
    printf("\n");
    
    code();
}

int main() {
    code();
}