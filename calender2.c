#include <stdio.h>

void printclndr(int day1, int numdays){
    int day, count;
    for(count = 1; count < day1-1; count++) {       // initial padding
        printf("\t");
    }
    count = day1 - 1;
    for(day = 1; day <= numdays; day++) {
        if(count >= 7) {
            printf("\n");
            count = 0;
        }
        else if(count > 0) {
            printf("\t");
        }
        printf("%2d", day);
        count++;
    }
    printf("\n");
}

int main(){
    printclndr(3, 30);
    printf("\n");

    printclndr(1, 28);
    printf("\n");

    printclndr(2, 28);
    return 0;
}