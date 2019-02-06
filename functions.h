#ifndef PROJEKT_WDI_FUNCTIONS_H
#define PROJEKT_WDI_FUNCTIONS_H

// Liczba elementów w ciągu
#define LEN 10

// Wyświetlenie menu wyboru
void menu() {
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
    for (int i = start; i < LEN; i++) {
        printf("Wprowadź %i. liczbę:\n", i + 1);
        if (scanf(" %i", &numbersArr[i]) != 1) {
            printf("Wprowadzono niepoprawne dane!\n");
            updateArr(numbersArr, i);
            break;
        }
    }
}

// Sprawdzenie czy uzupełniono ciąg liczbowy
void checkArr(const int *numbersArr) {
    if (strlen(numbersArr) == 0) {
        printf("Nie wprowadzono danych!\n");
        updateArr(numbersArr, 0);
    }
}

// Wyświetlenie ciągu liczb
void printArr(const int *numbersArr) {
    printf("\nPodany ciąg:");
    for (int i = 0; i < LEN; i++) {
        printf(" %i", numbersArr[i]);
    }
    printf("\n");
}

#endif //PROJEKT_WDI_FUNCTIONS_H