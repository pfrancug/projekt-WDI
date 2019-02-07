#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

void main() {
    int choice;
    int numbersArr[LEN];
    do {
        system("clear");
        menu();
        switch (scanf(" %i", &choice)) {
            case 1:
                system("clear");
                updateArr(numbersArr, 0);
                break;
            case 2:
                checkArr(numbersArr);
                printArr(numbersArr, "Podany");
                break;
            case 3:
                checkArr(numbersArr);
                printArr(numbersArr, "Podany");
                break;
            case 4:
                checkArr(numbersArr);
                printArr(numbersArr, "Podany");
                sortArr(numbersArr);
                printf("\nNaciśnij enter, aby powrócić do menu głównego...");
                clearBuffer();
                getchar();
                break;
            case 5:
                exit(0);
            default:
                clearBuffer();
        }
    } while (choice != 5);
}