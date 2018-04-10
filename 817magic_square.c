#include <stdio.h>
#include <math.h>

int main()
{
	printf("-----------------hello world----------------\n");
    
    int n,i,j,k;
    
    printf("enter the size of the square: ");
    scanf("%d",&n);
    
    int square[n][n];
    
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            square[i][j] = 0;
            }
    }
        
    i = 0;
    j = n/2;
    k = 1;
    
    square[i][j] = k;
    
    while (k <= n*n) {
        
        //set new position and implement cycle
        if(i == 0) {
            i = n-1;
        } else {
            i = i-1;
        }
        if(j == n-1) {
            j = 0;
        }
        else {
            j = j+1;
        }
        
        //check new position
        if(square[i][j] == 0) {
            break;
        }
        else if (square[i][j] != 0) {
            if(i < n-2) {
                i = i+2;
            } else if (i == n-2) {
                i = 0;
            } else if (i == n-1) {
                i = 1;
            }
            
            if(j == 0) {
                j = n-1;
            } else if (j > 0) {
                j = j-1;
            }
        }
        
        k++;
        square[i][j] = k;
            
    }
    
    for (i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            printf("\t%d", square[i][j]);
            if(j == n-1) {
                printf("\n");
            }
        }
    }
    
    printf("\n\n\n");
    main();
}
