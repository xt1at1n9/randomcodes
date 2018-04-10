#include <stdio.h>

int main()
{
    char sent[100];
    int i,len,count=0;
    
    printf("Write a sentence:\n");
    
    scanf("%[^\n]s",&sent);
    
    len = strlen(sent);
    
    for(i=0;i<len;i++)
    {
        sent[i] = toupper(sent[i]);
        switch(sent[i])
        {
            case 'A':
            count = count+1;
            break;
            case 'E':
            count = count+1;
            break;
            case 'I':
            count = count+1;
            break;
            case 'O':
            count = count+1;
            break;
            case 'U':
            count = count+1;
            break;
            default:
            count = count+0;
            break;
        }
    }
    
    printf("No. of vowels = %d",count);
}
