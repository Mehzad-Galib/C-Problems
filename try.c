#include<stdio.h>
#include <ctype.h>

void main(){
    char c[100], result;


    c = 'Madam';
    result = tolower(c);
    printf("tolower(%c) = %c\n", c, result);
}
