#include<stdio.h>
#include<string.h>


// student id 1715003
int main(void){

    FILE *fp;
    // char s;
    int index = 0, i;
    int found = 0;

    char fusr[50][20];
    char fpass[20][20];

    char usr[20];
    char pass[20];
    fp = fopen("password.txt", "r"); // reading from password.txt

    if(fp == NULL){
        printf("cant read file");
    }

    while(1){
        if(fscanf(fp, "%s %s", fusr[index], fpass[index])== EOF){
            break;
        }
        
        printf("%s\n", fusr[index]);
        printf("%s\n", fpass[index]);
        index++;
    }
    // close the file

    fclose(fp);

    printf("Enter Username: ");

    scanf("%s", usr);
    printf("Enter password: ");

    scanf("%s", pass);
    printf("%s == %s .. %d\n", usr, pass, index);

    for(i = 0; i < index; i++){
        if(strcmp(usr, fusr[i]) == 0){
            found = 1;
            if(strcmp(pass, fpass[i]) == 0){
                printf("Success! Username password matched\n");
            }
            else{
                printf("Sorry, didn't match");
            }
        }
    }

    if(found == 0){

    fp = fopen("password.txt", "a"); // reading from password.txt

    if(fp == NULL){
        printf("cant read file");
    }

    fprintf(fp, "\n%s %s", usr, pass);
    fclose(fp);
    }
    return 0;
}