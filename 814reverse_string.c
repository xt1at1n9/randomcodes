#include <stdio.h>

int main()
{
	printf("----------Hello World----------\n");
    
    int length, i;
    char string[200],reverse[200];
    
    printf("enter string: ");
    scanf("%[^\n]s",&string);
    
    length = strlen(string);
    
    reverse[length-1]=string[length-1]; //preserving the terminating character
    for(i=0;i<length-1;i++) {           //reverse the rest
        reverse[i] = string[length-2-i];
    }
    
    printf("In reverse: ");
    puts(reverse);
}
