#include<stdio.h>
#include<stdlib.h>

int main(void){
    int upper = 1000, lower = 100;
    int n = (rand() %
           (upper - lower + 1)) + lower;
    printf("%d\n", n);
}