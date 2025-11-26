#include <stdio.h>
#include <stdbool.h>

// Escreva um programa que leia o valor de 3 ˆangulos de um triˆangulo 
// e escreva se o triˆangulo ´e Acutˆangulo, Retˆangulo ou Obtusˆangulo.
// Triˆangulo Retˆangulo: possui um ˆangulo reto (igual a 90◦)
// Triˆangulo Obtusˆangulo: possui um ˆangulo obtuso (maior que 90◦)
// Triˆangulo Acutˆangulo: possui trˆes ˆangulos agudos (menores que 90◦)

void FlushBuffer(){
    int temp = 0;

    while((temp = getchar()) != '\n' && temp != EOF);
}

void ErrorMessage(){
    printf("Invalid Entry! \n");
    FlushBuffer();

    printf("\n");
}

void NewLine(){
    printf("\n");
}

int main(){

    while(true){

        float Angle1, Angle2, Angle3 = 0;

        printf("Enter Angle 1: ");
        int CheckScan1 = scanf(" %f", &Angle1);

        NewLine();

        if (CheckScan1 == 0){
            ErrorMessage();
            continue;
        }

        printf("Enter Angle 2: ");
        int CheckScan2 = scanf(" %f", &Angle2);

        NewLine();

        if (CheckScan2 == 0){
            ErrorMessage();
            continue;
        }

        printf("Enter Angle 3: ");
        int CheckScan3 = scanf(" %f", &Angle3);

        NewLine();

        if (CheckScan3 == 0){
            ErrorMessage();
            continue;
        }

        if (Angle1 == 90 || Angle2 == 90 || Angle3 == 90){
            printf("The Triangle Is Retangle! \n");
        }

        else if (Angle1 > 90 || Angle2 > 90 || Angle3 > 90){
            printf("The Triangle Is Obtuse! \n");
        }

        else if (Angle1 < 90 || Angle2 < 90 || Angle3 < 90){
            printf("The Triangle Is Acutangle! \n");
        }

        break;
    }
}