#include <stdio.h>
#include <string.h>
#include "functions.h"

void main() {
    int choice;
    int numbersArr[LEN];
    do {
        system("clear");
        menu();
        scanf(" %i", &choice);
        if (choice == 1) {
            system("clear");
            updateArr(numbersArr, 0);
            printArr(numbersArr);
            printf("\n");
        } else if (choice == 2) {
            system("clear");
            checkArr(numbersArr);
            printArr(numbersArr);
            printf("Opcja 2, tbc...\n");
            break;
        } else if (choice == 3) {
            system("clear");
            checkArr(numbersArr);
            printArr(numbersArr);
            printf("Opcja 3, tbc...\n");
        } else if (choice == 4) {
            system("clear");
            checkArr(numbersArr);
            printArr(numbersArr);
            printf("Opcja 4, tbc...\n");
        } else {
            system("clear");
            clearBuffer();
        }
    } while (choice != 5);
}