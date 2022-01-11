// debugging: first, create a new project, 

// diagonal up = i--; j++;
// diagonal down = i++;
// if boundary crossed, index values should be zero; 
// for (i = 1; i <=D*D; i++){
//     for(j = 1; j <=D; j++){

//     }

// when a sizeention becomes zero, then (sizeension - 1);

#include<stdio.h>

int main(void){

    int size;

    printf("Input which dimention array you want:\n");
    scanf("%d",&size);

    if(size %2 == 0){
        // even input given
        printf("Magic Square only works with odd dimention");
    }
    else{
        // odd input given
        int sqr = size*size;
        int a[size][size];
        int i = 0, j = size/2,k; 

        for(k=1; k<=sqr; k++){
            a[i][j] = k;
            // i--;
            // j++;

            if(k%size==0){
                // going upward
                i++;
                // --j;
            }
            else{
                // going diagonally
                i--;
                j++;
            }

        
                // checking boundary condition
                if(j == size){
                    j -= size;
                }
                if(i == size){
                    i -= size;
                }
                if(i<0){
                    i += size;
                }
            
        }

        for(i=0; i<size; i++){
            for(int j=0; j<size; j++){
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
        printf("\n");

    }

    return 0;

}