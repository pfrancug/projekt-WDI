#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

int main() {
    int choice;
    int numbersArr[LEN];
    bool insertedArr;
    for (;;) {
        system("clear");
        menu();
        scanf(" %i", &choice);
        switch (choice) {
            case 1:
                // Wprowadzenie ciągu 10 liczb całkowitych
                system("clear");
                updateArr(numbersArr, &insertedArr, 0);
                break;
            case 2:
                // Znalezienie w ciągu liczby najczęściej występującej
                checkArr(numbersArr, &insertedArr);
                printArr(numbersArr, "Podany");
                sortArr(numbersArr, true);
                waitEnter();
                break;
            case 3:
                // Wyznaczenie wartości średniej wprowadzonych liczb parzystych
                checkArr(numbersArr, &insertedArr);
                printArr(numbersArr, "Podany");
                arithMean(numbersArr);
                waitEnter();
                break;
            case 4:
                // Sortowanie liczb ciągu w porządku rosnącym
                checkArr(numbersArr, &insertedArr);
                printArr(numbersArr, "Podany");
                sortArr(numbersArr, false);
                waitEnter();
                break;
            case 5:
                // Wyjście z programu
                exit(0);
            default:
                clearBuffer();
        }
    }
    return 0;
}