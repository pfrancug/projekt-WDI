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
void updateArr(const int *numbersArr) {
    clearBuffer();
    printf("Wprowadzanie ciągu 10 liczb:\n");
    for (int i = 0; i < LEN; i++) {
        printf("Wprowadź %i. liczbę:\n", i + 1);
        while (scanf("%i", &numbersArr[i]) == 0);
    }
    printf("Wprowdzony ciąg to:");
    for (int i = 0; i < LEN; i++) {
        printf(" %i", numbersArr[i]);
    }
    printf("\n");
}

void main() {
    char choice;
    int numbersArr[LEN];
    do {
        menu();
        scanf(" %c", &choice);
        switch (choice) {
            case '1':
                updateArr(numbersArr);
                main();
                break;
            case '2':
                if (strlen(numbersArr) == 0) {
                    printf("Nie wprowadzono danych!\n");
                    updateArr(numbersArr);
                }
                printf("Opcja 2, tbc...\n");
                break;
            case '3':
                if (strlen(numbersArr) == 0) {
                    printf("Nie wprowadzono danych!\n");
                    updateArr(numbersArr);
                }
                printf("Opcja 3, tbc...\n");
                break;
            case '4':
                if (strlen(numbersArr) == 0) {
                    printf("Nie wprowadzono danych!\n");
                    updateArr(numbersArr);
                }
                printf("Opcja 4, tbc...\n");
                break;
        }
    } while (choice != '5');
}