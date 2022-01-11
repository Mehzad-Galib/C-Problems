// How to store our name?

#include<stdio.h>

#include<stdlib.h>

int main(void){

    int sqrs[10], random[10];
    int i;

    int n = rand();
   

    for(i=1; i<11; i++){
        sqrs[i-1] = i*i;
    }

    // for(i=0; i<10; i++){
    //     scanf("%d", &random[i]);
    // }

    for(i=0;i<10;i++){
        printf("%d ", random[i]);
    }
    return 0;

}