#ifndef PROJEKT_WDI_FUNCTIONS_H
#define PROJEKT_WDI_FUNCTIONS_H

/// Liczba elementów w ciągu
#define LEN 10

/// Wyświetlenie menu wyboru
void menu() {
    printf("\n\tMenu główne\n\n");
    printf("1. Wprowadzenie ciągu 10 liczb całkowitych\n");
    printf("2. Znalezienie w ciągu liczby najczęściej występującej\n");
    printf("3. Wyznaczenie wartości średniej wprowadzonych liczb parzystych\n");
    printf("4. Sortowanie liczb ciągu w porządku rosnącym\n");
    printf("5. Wyjście z programu\n");
}

/// Czyszczenie bufora
void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

/// Czekaj na Enter
void waitEnter() {
    printf("\nNaciśnij enter, aby powrócić do menu głównego...");
    clearBuffer();
    getchar();
}

/// Wyświetlenie ciągu liczb
void printArr(const int *numbersArr, char *text) {
    printf("%s ciąg:", text);
    for (int i = 0; i < LEN; i++) {
        printf(" %i", numbersArr[i]);
    }
    printf("\n");
}

/// Wprowadzenie ciągu znaków
void updateArr(const int *numbersArr, bool *insertedArr, int start) {
    for (int i = start; i < LEN; i++) {
        printf("Wprowadź %i. liczbę:\n", i + 1);
        if (scanf(" %i", &numbersArr[i]) != 1) {
            printf("Wprowadzono niepoprawne dane!\n");
            updateArr(numbersArr, insertedArr, i);
            break;
        }
    }
    *insertedArr = true;
    system("clear");
    printArr(numbersArr, "Wprowadzony");
    printf("\nNaciśnij Enter, aby kontynuować...");
    clearBuffer();
    getchar();
}

/// Sprawdzenie czy uzupełniono ciąg liczbowy
void checkArr(const int *numbersArr, bool *insertedArr) {
    if (*insertedArr == 0) {
//        if (strlen(numbersArr) == 0) {
        system("clear");
        printf("Nie wprowadzono danych!\n");
        updateArr(numbersArr, insertedArr, 0);
    }
    system("clear");
}

/// Wyznaczenie wartości średniej wprowadzonych liczb parzystych
void arithMean(const int *numbersArr) {
    double sum = 0;
    int count = 0;
    for (int i = 0; i < LEN; i++) {
        if (numbersArr[i] % 2 == 0) {
            sum += numbersArr[i];
            count++;
        }
    }
    if (count) {
        printf("Średnia wartość dla liczb przystych: %.2lf", sum / count);
    } else {
        printf("Brak liczb parzystych");
    }
}

/// Sortowanie liczb ciągu w porządku rosnącym
void sortArr(const int *numbersArr) {
    int sortedArr[LEN];
    for (int i = 0; i < LEN; i++) {
        sortedArr[i] = numbersArr[i];
    }
    for (int i = 0; i < LEN; i++) {
        for (int j = 0; j < LEN - 1; j++) {
            if (sortedArr[j] > sortedArr[j + 1]) {
                int t = sortedArr[j];
                sortedArr[j] = sortedArr[j + 1];
                sortedArr[j + 1] = t;
            }
        }
    }
    printArr(sortedArr, "Posortowany");
}

#endif //PROJEKT_WDI_FUNCTIONS_H