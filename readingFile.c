#include <stdio.h>

int main(void){
    int n = 500;
    char *s;
    FILE *fp;

    // reading a file;

    fp = fopen("./input.txt", "r");

    if(fp == NULL){
        printf("Couldn't open file");
        return 1;
    }

    // fprintf(fp, "n = %d\n", n);
    fscanf(fp, "%d", &n);
    fclose(fp);
    return 0;
}