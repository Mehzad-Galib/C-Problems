#include<stdio.h>

int main(){
    printf("hello");

    int i, j, k;

    k=0;

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            k +=i;
        }
    }

    return 0;

}
