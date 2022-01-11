#include<stdio.h>

int main(void){
    char ch[100];

    char *pa;

    printf("Write the Statement\n");

    scanf("%[^\n]s", ch);

    pa = ch;

    int vow=0, cons=0, num=0, sym=0;

    for(int i = 0; i < 100; i++){
        if ((*(pa+i) >= 'A' && *(pa+i) <= 'Z') || (*(pa+i) >= 'a' && *(pa+i) <= 'z'))
        {
            // testing letter
            if(*(pa+i) == 'A' || *(pa+i) == 'E' || *(pa+i) == 'I' || *(pa+i) == 'O' || *(pa+i) == 'U' || *(pa+i) == 'a' || *(pa+i) == 'e' || *(pa+i) == 'i' || *(pa+i) == 'o' || *(pa+i) == 'u'){
                // testing vowel
                vow++;
            }
            else{
                // testing consonant
                cons++;
            }
        }
        else if(*(pa+i) == ' '){
            continue;
        }
        else if((*(pa+i) >= '0' && *(pa+i) <= '9')){
            // checking letters
            num++;
        }
        else if((*(pa+i) == '\0')){
            break;
        }
        else{
            sym++;
        }
    }

    printf("Vowels = %d\n", vow);

    printf("Consonant = %d\n", cons);

    printf("Numbers = %d\n", num);

    printf("Symbols = %d\n", sym);
}