#include <stdio.h>

int main()
{
    float current, next;
    char op;
    
	printf("Enter expression: \n");
    scanf("%f",&current);
	
    while((op = getch() != "\0"))
    {
        scanf("%f",&next);
        switch(op)
        {
            case '+':
            current = current+next;
            break;
            case '-':
            current = current-next;
            break;
            case '*':
            current = current*next;
            break;
            case '/':
            current = current/next;
            break;
        }
    }
    
    printf("%.2f",current);
}
