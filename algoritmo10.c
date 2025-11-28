#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Suponha que um usu´ario digite as coordenadas (a, b) do canto inferior esquerdo de um quadrado e o
// comprimento d de sua diagonal.
// Escreva um c´odigo para verificar se um ponto (x, y) qualquer, tamb´em
// fornecido pelo usu´ario, est´a dentro ou fora deste quadrado.

void FlushBuffer(){
    int temp = 0;

    while((temp = getchar()) != '\n' && temp != EOF);
}


int main(){

    while(true){

        double x, y, d, a, b = 0;

        printf("Enter value for A: ");
        if (scanf(" %lf", &a) == 0){printf("Invalid entry! \n"); FlushBuffer(); continue;}

        printf("\n");

        printf("Enter value for B: ");
        if (scanf(" %lf", &b) == 0){printf("Invalid entry! \n"); FlushBuffer(); continue;}

        printf("\n");

        printf("Enter value for diagonal: ");
        if (scanf(" %lf", &d) == 0){printf("Invalid entry! \n"); FlushBuffer(); continue;}

        printf("\n");

        printf("Enter value for point X: ");
        if (scanf(" %lf", &x) == 0){printf("Invalid entry! \n"); FlushBuffer(); continue;}

        printf("\n");

        printf("Enter value for point Y: ");
        if (scanf(" %lf", &y) == 0){printf("Invalid entry! \n"); FlushBuffer(); continue;}

        printf("\n");

        double SquareSide = (d / sqrt(2));

        double MaxX = a + SquareSide;
        double MaxY = b +SquareSide;

        if (x >= a && x <= MaxX && y >= b && y <= MaxY){
            printf("The coordinate (%.2f, %.2f) is inside the square! \n", x, y);
        }

        else {
            printf("The coordinate (%.2f, %.2f) is outside the square! \n", x, y);
        }

        break;
    }
}