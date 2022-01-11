#include <stdio.h>

int main(void)
{
    int i = 0;

    // problem 1
    for(i=1; i<=25; i++){
        printf("%d ", i);
        if(i%5 ==0){
            printf("\n");
        }
    }

    printf("\n");

    // problem 2
    for(i=1; i<=5; i++){

        for(int j = 1; j<= i; j++){
            printf("* ");
            if(i==j){
                printf("\n");
            }
        }
    }

    // problem 3

    int m, n, s;

    for(m=0; m<=4; m++){
        printf("\n");
        for(n = 3-m; n>=0; n--){

            printf(" ");

        }
        for(int s=0; s<=m; s++){
            printf("* ");
        }
    }

    // problem 4

    int a, b, c, d;

    for (int a = 1; a <= 5; a++)
    {
        printf("\n");
        for (int b = 5; b > a; b--)
        {
            printf("  "); // printed double space
        }
        for (int c = 1; c <= a; c++)
        {
            printf("* ");
        }
    }
}