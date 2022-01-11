/* Main function of the C program. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    int num1,num2,num3,sum,mul,sub, n, i = 0, temp;
    float num4, num5,rem,division;

    // taking character from user
    printf("Enter Character:\n");
    scanf("%c", &ch);
    switch(ch){

        case 'A':
        printf("Enter number of integers\n");
        scanf("%d", &n);
        int sumOfNums = 0;

        while(i<n){
            scanf("%d", &temp);
            sumOfNums = sumOfNums + temp;
            i++;

        }

        printf("The sum of %d integers are %d",n, sumOfNums);
        break;

        case 'S':
        printf("Enter 2 integers\n");
        scanf("%d, %d", &num1,&num2);
        sub = num1-num2;

        printf("Subtraction is %d", sub);
        break;

        case 'M':
        printf("Enter number of integers to be multiplicated\n");
        scanf("%d", &n);

        int totalMul = 1;
        
        for(int i = 0; i < n; i++){
            scanf("%d", &temp);
            totalMul = totalMul * temp;
        }
        

        printf("Multiplication of %d integers is %d",n, totalMul);
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
