#include <stdio.h>
#include <stdbool.h>

// Dada a idade de um usuário como valor inteiro, escreva um programa que verifique se este usu´ario j´a
// pode dirigir ou, pelo menos, votar.

void FlushBuffer(){
    int temp = 0;

    while((temp = getchar()) != '\n' && temp != EOF);
}

int main(){

    while(true){

        int UserAge = 0;

        printf("Enter User Age: ");
        int TempScan = scanf(" %d", &UserAge);

        printf("\n");

        if (TempScan == 0){
            printf("Invalid Entry! \n");
            FlushBuffer();
            continue;
        }

        else if (UserAge >= 18){
            printf("You Are Enabled To Drive And Vote! \n");
        }

        else if (UserAge >= 16 && UserAge < 18){
            printf("You Are Enabled Just To Vote! \n");
        }

        else if (UserAge < 16){
            printf("You Are Disabled To Vote And Drive \n");
        }

        else{
            printf("Invalid Entry! \n");
            continue;
        }

        break;

    }
}