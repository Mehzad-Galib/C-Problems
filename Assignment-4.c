/* Main function of the C program. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    int num1,num2,num3,sum,mul,sub;
    float num4, num5,rem,division;

    // taking character from user
    printf("Enter Character:\n");
    scanf("%c", &ch);
    switch(ch){

        case 'A':
        printf("Enter 3 integers\n");
        scanf("%d, %d, %d", &num1,&num2, &num3);
        sum = num1+num2+num3;

        printf("The sum of 3 integers are %d", sum);
        break;

        case 'S':
        printf("Enter 2 integers\n");
        scanf("%d, %d", &num1,&num2);
        sub = num1-num2;

        printf("Subtraction is %d", sub);
        break;

        case 'M':
        printf("Enter 2 integers\n");
        scanf("%d, %d", &num1,&num2);
        mul = num2*num1;

        printf("Multiplication is %d", mul);
        break;

        case 'D':

            printf("Enter 2 double numbers\n");
            scanf("%f, %f", &num4, &num5);
            if(num5>0){
            division = num4/num5;
            printf("The division is %.2f", division);
            }


        else{
            printf("Division is not possible");
        }
        break;

        case 'R':
        printf("Enter 2 integers\n");
        scanf("%d, %d", &num1, &num2);

        rem = num1%num2;

        printf("The remainder is %.2f", rem);
        break;

        case 'X':
        printf("Enter 3 integers\n");
        scanf("%d, %d, %d", &num1,&num2, &num3);

        if(num1 > num2 && num1 > num3){
            printf("%d is the greatest", num1);
        }
        else if(num2>num1 && num2> num3){
            printf("%d is the greatest", num2);
        }
        else{
            printf("%d is the greatest", num3);
        }
        break;

        default:
        printf("Invalid Input");
        break;

    }

    return 0;
}
