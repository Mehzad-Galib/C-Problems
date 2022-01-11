#include<stdio.h>

int main(void){
    int n;
    printf("Enter how much input you want\n");
    scanf("%d", &n);

    int oddSum = 0, evenSum = 0;

    int temp;

    // for(int i=0; i<n; i++){
    //     scanf("%d", &temp);
    //     if(temp%2 ==0 ){
    //         evenSum += temp;

    //     }
    //     else{
    //         oddSum += temp;
    //     }
    // }
    int i = 0;

    while(i<n){
        scanf("%d", &temp);
        if(temp%2 ==0 ){
            evenSum += temp;

        }
        else{
            oddSum += temp;
        }
        i++;
    }

    if(evenSum> oddSum){
        printf("Even sum is %d\n", evenSum);
        printf("odd sum is %d\n", oddSum);
    }
    else{
        printf("odd sum is %d\n", oddSum);
        printf("Even sum is %d\n", evenSum);

    }
}