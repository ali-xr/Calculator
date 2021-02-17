#include <stdio.h>
int main(){

    int num1,num2;
    int character;
    printf("Enter 2 numbers:\n");
    scanf("%d%d",&num1,&num2);
    printf("1. +\t 2. -\t 3. *\t 4. /\t");
    scanf("%d",&character);


    switch(character){
    case 1:
        printf("%d + %d = %d",num1,num2,num1 + num2);
        break;
    case 2:
        printf("%d - %d = %d",num1,num2,num1 - num2);
        break;
    case 3:
        printf("%d * %d = %d",num1,num2,num1 * num2);
        break;
    case 4:
        printf("%d / %d = %d",num1,num2,num1 / num2);
        break;
    }
return 0;
}
