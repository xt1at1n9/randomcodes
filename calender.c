#include <stdio.h>

void printclndr();

int main()
{
    int first,days; //initialize local variables. Local variables are valid on within the function they are defined in
    
    first = firstday(); //sets 'first' equal to 'value returned by firstday function'
    
    if(first<1||first>7) //checks if the entered day is a valid one
    {
        printf("%d is not a valid day. Try again. \n",first);
        firstday(); //if not valid firstday is called again
    }
    
    days = monthdays(); //days = 'value returned by monthdays'
    
    if(days<28||days>31)
    {
        printf("Retry. Enter days for a valid month. \n");
        monthdays();
    }
    
    printf("\n");
    
    printclndr(first,days);
    
    printf("\n\n");
    
    main();
}


int firstday() //function to get the starting day of the month
{
    int day; //initializing local variables
    printf("First day of the month (1= Sun, 7= Sat):  ");
    scanf("%d",&day);
    
    return day; //returns the value of day
}

int monthdays() //function to get no of days in a month
{
    int days; //local variables
    printf("Number of days in the month:  ");
    scanf("%d",&days);
    
    return days;
}

void printclndr(int day1, int numdays) //arguments are locally defined
{
    int date,check,count,tab;
    
    check = day1 + numdays;
    tab = 0;
    
    for(count=1;count<check;count++)
    {
        if(count<day1)
        {
            printf("\t");
            tab+=1;
        }
        if(count>=day1)
        {
            printf("%*d\t",2,count-day1+1);
            tab+=1;
        }
        if(tab==7)
        {
            printf("\n");
            tab=0;
        }
    }
}