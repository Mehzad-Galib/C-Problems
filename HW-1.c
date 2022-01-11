#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include <ctype.h>

int reverseString(char *inStr, int length){
    
    char anotherStr[length];

    strcpy(anotherStr,inStr);

    int temp;
    int left = 0;
    int right = length-1;

    for(int j = left; j < right; j++){
        temp = inStr[j];
        inStr[j] = inStr[right];
        inStr[right] = temp;
        right--;
    }

    printf("Reverse = %s\n", inStr);

    // palindrome checking

    int result = strcmp(anotherStr, inStr);

    if(result){
        printf("Palindrome = No");
    }
    else{
        printf("Palindrome = Yes");
    }
}

int main(void){
    char str[100];  
    int length;
    printf("Input = ");
    scanf("%[^\n]s",str);
    length = strlen(str);

    for(int i=0;i<=strlen(str);i++){
      if(str[i]>=65&&str[i]<=90)
         str[i]=str[i]+32;
   }

    
    reverseString(str, length);
}

