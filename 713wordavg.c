#include <stdio.h>

int main()
{
	char sent[100];
    int i,len,count=0;
    float letters,words;
    float avg;
    
    printf("enter sentence:\n");
    
    scanf("%[^\n]s",&sent);
    
    len=strlen(sent);
    
    for(i=0;i<len;i++)
    {
        if(isspace(sent[i]))
        {
            count=count+1;
        }
    }
    
    words=count+1;
    letters=len-count;
    
    avg=letters/words;
    
    printf("avg word length: %.1f",avg);
}
