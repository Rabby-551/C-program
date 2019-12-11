#include <stdio.h>
int main()
{
    ///declaring variables
    int year;

     ///prompting the user for the input;
    printf("Enter a year: ");
    scanf("%d",&year);

     ///applying (if___else) condition for leap year or not;
    if(year%4 == 0)
    {
        if( year%100 == 0)
        {
            if ( year%400 == 0)
                printf("%d is a leap year.", year);
            else
                printf("%d is not a leap year.", year);
        }
        else
            printf("%d is a leap year.", year );
    }
    else
        printf("%d is not a leap year.", year);

    return 0;
}
