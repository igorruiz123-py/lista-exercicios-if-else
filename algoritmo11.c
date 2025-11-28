#include <stdio.h>
#include <stdbool.h>

// Escreva um programa que leia trˆes valores correspondentes aos lados de um triˆangulo e determine se
// e poss´ıvel formar um triˆangulo com esses lados.
// Lembre-se da condi¸c˜ao de existˆencia de um triˆangulo:
// a + b > c, a + c > b, b + c > a

void FlushBuffer(){
    int temp = 0;

    while((temp = getchar()) != '\n' && temp != EOF){};
}

int main(){

    while(true){

        int side1, side2, side3 = 0;

        printf("Enter a value for side 1: ");
        if (scanf(" %d", &side1) == 0) {printf("Invalid entry! \n"); FlushBuffer(); continue;}

        printf("\n");
        
        printf("Enter a value for side 2: ");
        if (scanf(" %d", &side2) == 0) {printf("Invalid entry! \n"); FlushBuffer(); continue;}

        printf("\n");

        printf("Enter a value for side 3: ");
        if (scanf(" %d", &side3) == 0) {printf("Invalid entry! \n"); FlushBuffer(); continue;}

        printf("\n");

        if (side1 < side2 + side3 || side2 < side1 + side3 || side3 < side1 + side2){
            printf("The sides make a triangle! \n");
        }

        else{
            printf("The sides can not make a triangle! \n");
        }

        break;
    }
}