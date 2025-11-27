#include <stdio.h>
#include <stdbool.h>

// Escreva um programa que instrua o usu´ario a digitar dois n´umeros inteiros a e b, com b ̸= 0.
// O programa deve apresentar na tela se b divide a.
// Al´em disso, se o usu´ario digitar b = 0, o programa n˜ao deve fazer
// nenhuma verifica¸c˜ao de divis˜ao e deve apresentar na tela uma mensagem de erro.
// Obs.: Um valor inteiro n˜ao nulo b divide outro valor inteiro a se, e somente se, o resto da divis˜ao de
// a por b ´e 0.

void FlushBuffer(){
    int temp = 0;

    while((temp = getchar()) != '\n' && temp != EOF);
}

void ErrorMessage(){
    printf("Invalid Entry! \n");
    FlushBuffer();

    printf("\n");
}

void ErrorNotPossibleDivideByZero(){
    printf("Invalid Entry! \n");
    FlushBuffer();

    printf("\n");
}

void NewLine(){
    printf("\n");
}

int main(){

    while(true){

        int NumA, NumB = 0;

        printf("Enter Number A: ");
        int CheckScan1 = scanf(" %d", &NumA);

        NewLine();

        if (CheckScan1 == 0){
            ErrorMessage();
            continue;
        }

        printf("Enter Number B: ");
        int CheckScan2 = scanf(" %d", &NumB);

        NewLine();

        if (CheckScan2 == 0){
            ErrorMessage();
            continue;
        }

        if (NumB == 0){
            ErrorNotPossibleDivideByZero();
            continue;
        }

        if (NumA % NumB == 0){
            printf("Number B Is Divisible by Number A \n");
        }
        else{
            printf("Number B Is Not Divisible By Number A \n");
        }

        break;
    }
}