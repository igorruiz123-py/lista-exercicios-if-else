#include <stdio.h>
#include <stdbool.h>

// Escreva um programa que leia uma temperatura em graus Celsius 
//  e, em seguida, solicite ao usu´ario que
// informe a escala para a qual deseja converter essa temperatura: ’K’ para Kelvin ou ’F’ para Fahrenheit.
// O programa deve então realizar a convers˜ao apropriada e apresentar o valor convertido
// Para Fahrenheit: F = 9/5 * C + 32
// Para Kelvin: K = C + 273,15
// Se o usuário digitar qualquer outra letra que n˜ao seja ’K’ ou ’F’, o programa deve exibir uma mensagem
// de erro.

void FlushBuffer(){
    int temp = 0;

    while((temp = getchar()) != '\n' && temp != EOF);
}

float CalcFahr(float TempC){
    
    float Fahr;

    Fahr = 32 + (TempC * 9/5);

    printf("The Temperature In Fahrenheit: %.2f \n", Fahr);
    printf("\n");

    return Fahr;
}

float CalcKel(float TempC){

    float Kel;

    Kel = TempC + 273.25;

    printf("The Temperature In Kelvin: %.2f \n", Kel);
    printf("\n");

    return Kel;
}

int main(){

    while(true){

        float Temperature;
        char ScaleTeperature;
        char Numbers[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
        int LenghtNums = sizeof(Numbers) / sizeof(Numbers[0]);
        bool NumFound = false;

        printf("Enter Temperature In Celsius: ");
        int TempScan1 = scanf(" %f", &Temperature);

        printf("\n");

        printf("Enter Temperature Scale To Convert (K)elvin (F)ahrenheit: ");
        scanf(" %c", &ScaleTeperature);

        printf("\n");

        for (int i = 0; i < LenghtNums; i++){
            if (ScaleTeperature == Numbers[i]){
                NumFound = true;
            }
        }

        if (TempScan1 == 0){
            printf("Invalid Entry! \n");
            FlushBuffer();
            continue;
        }

        else if (NumFound){
            printf("Invalid Entry! \n");
            NumFound = false;
            FlushBuffer();
            continue;
        }

        else if (ScaleTeperature == 'F' || ScaleTeperature == 'f'){
            CalcFahr(Temperature);
        }

        else if (ScaleTeperature == 'K' || ScaleTeperature == 'k'){
            CalcKel(Temperature);
        }

        else{
            printf("Invalid Entry! \n");
            NumFound = false;
            FlushBuffer();
            continue;
        }

        break;
    }
}

