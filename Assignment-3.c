/* Main function of the C program. */

#include <stdio.h>


int main()
{
    int year;

    // getting input from keyboard
    printf("Input Year\n");
    scanf("%d", &year);

    // if divided by 2 and positive
    if(year>0 && year%2 == 0){

        // checking for Leap Year Condition: Every year that is exactly divisible by 4 is a leap year, except for years that are exactly divisible by 100, but these centurial years are leap years if they are exactly divisible by 400.

        if((year % 4 ==0) && ((year % 400 ==0) || (year % 100 !=0))){
        printf("The year %d is an EVEN number and a leap year", year);
        }

        else{
            printf("The year %d is an EVEN number and not a leap year", year);
        }

    }

    // if not divided by 2 and positive
    else if(year>0 && year %2 == 1){
        printf("The year %d is an ODD number, thus not a leap year", year);
    }
    // if not positive
    else{
        printf("%d is not a valid year", year);
    }

    return 0;
}
