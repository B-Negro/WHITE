#include <stdio.h>

int main()
{
    int day;
    printf("Enter the number (1-7) of day \n");
    scanf("%d", &day);
    switch(day)
    {
        case 1: 
         printf("Monday");
         break;
        case 2:
         printf("Tuesday");
        break;
        case 3:
         printf("Wensday");
         break;
        case 4:   
         printf("Thursday");
         break;
        case 5:
         printf("Friday");
         break;
        case 6:
         printf("Saturday");
         break;
        case 7:
         printf("Sunday");
         break;  
        default:
         printf("Invalid day number!\n Enter number between 0 and 8"); 
    }    
    return 0;
}