#include <stdio.h>
#include <stdbool.h>

// Para ser bissexto, um ano deve satisfazer uma das seguintes condi¸c˜oes:
// Ser divis´ıvel por 4 mas n˜ao ser divis´ıvel por 100;
// Ser divis´ıvel por 4, por 100 e por 400 simultaneamente.
// Escreva um c´odigo para verificar se um dado ano ´e bissexto.

void FlushBuffer(){
    int temp = 0;

    while((temp = getchar()) != '\n' && temp != EOF);
}

int LeapYear(int year){
    if (year % 4 == 0 && year % 100 == 0 && year % 400 == 0){
        printf("The '%d' is a leap year! \n", year);
    }
    else if (year % 4 == 0 && year % 100 != 0){
        printf("The year: '%d' is a leap year! \n", year);
    }

    printf("\n");

    return year;
}

int main(){

    while(true){

        int year = 0;

        printf("Enter a year: ");
        int temp = scanf(" %d", &year);

        if (temp == 0){
            printf("Invalid entry! \n");
            FlushBuffer();
            continue;
        }

        else if (year < 0){
            printf("Invalid entry! \n");
            FlushBuffer();
            continue;
        }

        LeapYear(year);

        break;
    }
}