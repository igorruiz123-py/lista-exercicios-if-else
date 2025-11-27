#include <stdio.h>
#include <stdbool.h>

// Escreva um c´odigo que considere 2 n´umeros quaisquer e imprima o menor deles.

void FlushBuffer(){
    int temp = 0;

    while((temp = getchar()) != '\n' && temp != EOF);
}

void ErrorMessage(){
    printf("Invalid Entry! \n");
    FlushBuffer();

    printf("\n");
}

void CalcShortestNumber(int Num1, int Num2){
    if (Num1 > Num2){
        printf("'%d' Is Shorter Than '%d' \n", Num2, Num1);
    }
    else{
        printf("'%d' Is Shorter than '%d' \n", Num1, Num2);
    }

    printf("\n");
}

void NewLine(){
    printf("\n");
}

int main(){

    while(true){

        int Num1 = 0;
        int Num2 = 0;

        printf("Enter Number 1: ");
        int temp1 = scanf(" %d", &Num1);

        NewLine();

        if (temp1 == 0){
            printf("Invalid Entry! \n");
            FlushBuffer();
            continue;
        }

        printf("Enter Number 2: ");
        int temp2 = scanf(" %d", &Num2);

        NewLine();

        if (temp2 == 0){
            printf("Invalid Entry! \n");
            FlushBuffer();
            continue;
        }

        CalcShortestNumber(Num1, Num2);

        break;
    }
}

