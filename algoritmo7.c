#include <stdio.h>
#include <stdbool.h>

// Escreva um programa que instrua o usu´ario a digitar trˆes vari´aveis reais x, y e z.
// Escreva um c´odigo para imprimir os n´umeros digitados em ordem crescente.
// x = 5
// y = -1
// z = 3
// seu c´odigo deve imprimir:
// -1 3 5

void FlushBuffer(){
    int temp = 0;

    while((temp = getchar()) != '\n' && temp != EOF);
}

void ErrorMessage(){
    printf("Invalid Entry! \n");
    FlushBuffer();

    printf("\n");
}

void DisplaySortedNumbers(int Num1, int Num2, int Num3){
    int temp = 0;

    if (Num1 > Num2){
        temp = Num1;
        Num1 = Num2;
        Num2 = temp;
    }

    if (Num1 > Num3){
        temp = Num1;
        Num1 = Num3;
        Num3 = temp;
    }

    if (Num2 > Num3){
        temp = Num2;
        Num2 = Num3;
        Num3 = temp;
    }

    printf("%d, %d, %d \n", Num1, Num2, Num3);

    printf("\n");
}

int main(){

    while(true){

        int Num1, Num2, Num3 = 0;

        printf("Enter Number 1: ");
        int temp1 = scanf(" %d", &Num1);

        printf("\n");

        printf("Enter Number 2: ");
        int temp2 = scanf(" %d", &Num2);

        printf("\n");

        printf("Enter Number 3: ");
        int temp3 = scanf(" %d", &Num3);

        if (temp1 == 0 || temp2 == 0 || temp3 == 0){
            printf("Invalid Entry! \n");
            FlushBuffer();
            continue;
        }

        printf("\n");

        DisplaySortedNumbers(Num1, Num2, Num3);

        break;
    }
}