
#include<stdio.h>

int main(){
    float height, width, length;

    printf("Enter the length of the Cube: ");
    scanf("%f", &length);

   printf("Enter the width of the Cube: ");
    scanf("%f", &width);

    printf("Enter the height of the Cube: ");
    scanf("%f", &height);

    printf("Volume of the cube is: %.2f", length*width*height);

    return 0;


}
