#include <stdio.h>
#include <stdbool.h>

// Laranjas custam 30 centavos cada se forem compradas menos do que uma d´uzia, e custam 25 centavos se
// forem compradas doze ou mais.
// Escreva um programa que, dado o n´umero de laranjas, calcule e imprima
// o valor da compra.

void FlushBuffer(){
    int temp = 0;

    while((temp = getchar()) != '\n' && temp != EOF);
}

int main(){

    while(true){

        int OrangeNum = 0;
        float OrangePrice = 0;

        printf("Enter a number of oranges: ");
        int temp = scanf(" %d", &OrangeNum);

        printf("\n");

        if (temp == 0){
            printf("Invalid entry! \n");
            FlushBuffer();
            continue;
        }

        if (OrangeNum >= 12){
            OrangePrice = OrangeNum * 0.25;

            printf("The price for the oranges will be '%.2f'$ \n", OrangePrice);
        }
        else if (OrangeNum < 12){
            OrangePrice = OrangeNum * 0.30;

            printf("The price for the oranges will be '%.2f'$ \n", OrangePrice);
        }

        break;
    }
}