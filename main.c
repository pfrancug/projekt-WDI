#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

void cont();

void main() {
    int choice;
    int numbersArr[LEN];
    for (;;) {
        system("clear");
        menu();
        scanf(" %i", &choice);
        switch (choice) {
            case 1:
                system("clear");
                updateArr(numbersArr, 0);
                break;
            case 2:
                checkArr(numbersArr);
                printArr(numbersArr, "Podany");



                waitEnter();
                break;
            case 3:
                checkArr(numbersArr);
                printArr(numbersArr, "Podany");



                waitEnter();
                break;
            case 4:
                checkArr(numbersArr);
                printArr(numbersArr, "Podany");
                sortArr(numbersArr);
                waitEnter();
                break;
            case 5:
                exit(0);
            default:
                clearBuffer();
        }
    }
}