#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Liczba elementów w ciągu
#define LEN 10

// Wyświetlenie menu wyboru
void menu() {
//    system("clear");
    printf("\n\tMenu główne\n\n");
    printf("1. Wprowadzenie ciągu 10 liczb całkowitych\n");
    printf("2. Znalezienie w ciągu liczby najczęściej występującej\n");
    printf("3. Wyznaczenie wartości średniej wprowadzonych liczb parzystych\n");
    printf("4. Sortowanie liczb ciągu w porządku rosnącym\n");
    printf("5. Wyjście z programu\n");
}

// Czyszczenie bufora
void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

// Wprowadzenie ciągu znaków
void updateArr(const int *numbersArr, int start) {
    clearBuffer();
    printf("Wprowadzanie ciągu 10 liczb:\n");
    for (int i = start; i < LEN; i++) {
        printf("Wprowadź %i. liczbę:\n", i + 1);
        if (scanf(" %i", &numbersArr[i]) != 1) {
            printf("Wprowadzono niepoprawne dane\n");
            updateArr(numbersArr, i);
            break;
        }
    }
}

void checkArr(const int *numbersArr) {
    if (strlen(numbersArr) == 0) {
        printf("Nie wprowadzono danych!\n");
        updateArr(numbersArr, 0);
    }
}

void printArr(const int *numbersArr) {
    printf("Wprowdzony ciąg to:");
    for (int i = 0; i < LEN; i++) {
        printf(" %i", numbersArr[i]);
    }
}

void main() {
    int choice;
    int numbersArr[LEN];
    do {
        menu();
        scanf(" %i", &choice);
        if (choice == 1) {
            updateArr(numbersArr, 0);
            printArr(numbersArr);
            printf("\n");
            main();
        } else if (choice == 2) {
            checkArr(numbersArr);
            printArr(numbersArr);
            printf("Opcja 2, tbc...\n");
        } else if (choice == 3) {
            checkArr(numbersArr);
            printArr(numbersArr);
            printf("Opcja 3, tbc...\n");
        } else if (choice == 4) {
            checkArr(numbersArr);
            printArr(numbersArr);
            printf("Opcja 4, tbc...\n");
        } else {
            clearBuffer();
        }
    } while (choice != 5);
}