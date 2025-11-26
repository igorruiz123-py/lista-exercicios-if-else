#include <stdio.h>
#include <stdbool.h>

// O IMC (´ındice de massa corp´orea) indica o grau de obesidade de uma pessoa.
// Este ´ındice ´e obtido pelo peso (em kg) dividido pelo quadrado da altura (em metros).
// A tabela a seguir apresenta as faixas deste índice
// < 20 Abaixo do normal
// [20, 25] Normal
// [25, 30] Sobrepeso
// [30, 35] Obesidade leve
// [35, 40] Obesidade moderada
// ≥ 40 Obesidade m´orbida

void FlushBuffer(){
    int temp = 0;

    while((temp = getchar()) != '\n' && temp != EOF);
}

void ErrorMessage(){
    printf("Invalid Entry! \n");
    FlushBuffer();
}

float CalcIMC(float weight, float height){
    float IMC = 0;

    IMC = weight / (height * height);

    printf("Your IMC is %.2f \n", IMC);

    printf("\n");

    return IMC;
}

int main(){

    while(true){

        float UserHeight = 0;
        float UserWeight = 0;

        printf("Enter Your Height: ");
        int CheckScan1 = scanf(" %f", &UserHeight);

        printf("\n");

        printf("Enter Your Weight: ");
        int CheckScan2 = scanf(" %f", &UserWeight);

        printf("\n");

        if (CheckScan1 == 0){
            ErrorMessage();
            continue;
        }

        else if (CheckScan2 == 0){
            ErrorMessage();
            continue;
        }

        float IMC = CalcIMC(UserWeight, UserHeight);

        if (IMC < 20){
            printf("You Are Under Weight! \n");
        }

        else if (25 >= IMC || IMC <= 30){
            printf("You Are Over Weight! \n");
        }

        else if (30 >= IMC || IMC <= 35){
            printf("You Are Light Obese! \n");
        }

        else if (35 >= IMC || IMC <= 40){
            printf("You Are Moderate Obese! \n");
        }

        else if (IMC > 40){
            printf("You Are Over Obese! \n");
        }

        else{
            ErrorMessage();
        }

        break;
    }
}