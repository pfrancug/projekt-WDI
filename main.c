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
        } else if (choice == 2) {
            checkArr(numbersArr);
            printArr(numbersArr, "Podany");
        } else if (choice == 3) {
            checkArr(numbersArr);
            printArr(numbersArr, "Podany");
        } else if (choice == 4) {
            int newArr[LEN];
            checkArr(numbersArr);
            printArr(numbersArr, "Podany");
            for (int i = 0; i < LEN; i++) {
                newArr[i] = numbersArr[i];
            }
            for (int i = 0; i < LEN; i++) {
                for (int j = 0; j < LEN - 1; j++) {
                    if (newArr[j] > newArr[j + 1]) {
                        int t = newArr[j];
                        newArr[j] = newArr[j + 1];
                        newArr[j + 1] = t;
                    }
                }
            }
            printArr(newArr, "Posortowany");
            printf("\nNaciśnij enter, aby powrócić do menu głównego...");
            clearBuffer();
            getchar();
        } else {
            system("clear");
            clearBuffer();
        }
    } while (choice != 5);
}