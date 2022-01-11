#include<stdio.h>

#include<stdlib.h>

int main(void){

    int arr[50];

    int max, min, sum, upper=1000, lower=100;
    float avg;
    
    sum = 0;

    for(int i=0; i<50; i++){
        arr[i] = (rand() %
           (upper - lower + 1)) + lower;
    }

    max = arr[0];
    min = arr[0];

    printf("50 Random Generated Numbers are as follows:\n");

    for(int i=0; i<50; i++){
        // printf("%d\n", i);
        printf("%d\n", arr[i]);

        sum += arr[i];
 
        if(arr[i] > max){
            max = arr[i];
        }

        if(arr[i]<min){
            min = arr[i];
        }
        
    }
    avg = sum/50;

    printf("Maximum of the numbers is %d\n",max);
    printf("Minimum of the numbers is %d\n",min);

    printf("Sum of 50 integers is %d\n",sum);
    printf("Avg of 50 integers is %.2f\n", avg);

    return 0;

}