#include <stdio.h>


void selection_sort(int numbers[], int size);
int index_of_largest(int numbers[], int n);

int main()
{
    printf("------------Hello World------------");
    
    int i, n;

    
    printf("\nenter number of numbers to be sorted: ");
    scanf("%d", &n);
    int numbers[n];
    
    printf("enter %d numbers to be sorted: ", n);
    for (i = 0; i < n; i++) {
        scanf(" %d", &numbers[i]);
    }

    selection_sort(numbers, n);
    
    printf("\nnumbers in sorted order:");
    for (i = 0; i < n; i++) {
        printf(" %d", numbers[i]);
    }
    
    
    printf("\n\n");
    main();
}


void selection_sort(int numbers[], int n) {
    int j, tmp;
    
    j = index_of_largest(numbers, n);
    tmp = numbers[j];
    numbers[j] = numbers[n-1];
    numbers[n-1] = tmp;

    selection_sort(numbers, n - 1);
}


int index_of_largest(int numbers[], int n) {
    
    int i, j = 0;
    
    for (i = 0; i < n; i++) {
        if (numbers[j] > numbers[i]) {
            continue;
        }
        else {
            j = i;
        }
    }
    
    return j;
}