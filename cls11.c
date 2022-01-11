#include <stdio.h>

int main(void){
    int n = 500;
    FILE *fp;

    // writing to a file;

    fp = fopen("./class-2.txt", "w");

    if(fp == NULL){
        printf("Couldn't open class");
        return 1;
    }

    fprintf(fp, "n = %d\n", n);
    fclose(fp);
    return 0;
}