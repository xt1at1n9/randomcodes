#include <stdio.h>

int main()
{
	printf("----------hello world----------\n");
	
    char sent[100];
    int j;
    printf("Enter sentence: ");
    gets(sent);
    
    for(j=0;j<sizeof(sent);j++) {
        
        sent[j] = toupper(sent[j]);
        
        switch(sent[j]){
            
            case 'A':
            sent[j] = '4';
            break;
            case 'B':
            sent[j] = '8';
            break;
            case 'E':
            sent[j] = '3';
            break;
            case 'I':
            sent[j] = '1';
            break;
            case 'O':
            sent[j] = '0';
            break;
            case 'S':
            sent[j] = '5';
            break;
            default:
            sent[j] = sent[j];
            break;
        }
    }
    
    puts(sent);
}
