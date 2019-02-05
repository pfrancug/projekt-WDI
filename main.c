#include <stdio.h>
#include <stdlib.h>

void menu() {
    //    system("clear");
    printf("\tMenu główne:\n\n");
    printf("1. Wprowadzenie ciągu 10 liczb całkowitych\n");
    printf("2. Znalezienie w ciągu liczby najczęściej występującej\n");
    printf("3. Wyznaczenie wartości średniej wprowadzonych liczb parzystych\n");
    printf("4. Sortowanie liczb ciągu w porządku rosnącym\n");
    printf("5. Wyjście z programu\n");
}

void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void main() {
    char choice;
    int numbersArr[10] = {};

    do {
        menu();
        scanf(" %c", &choice);
        switch (choice) {
            case '1':
                printf("Wybrano opcję 1");
                break;
            case '2':
                printf("");
                break;
            case '3':
                printf("");
                break;
            case '4':
                printf("");
                break;
            default:
                break;
        }
        clearBuffer();
    } while (choice != '5');
}