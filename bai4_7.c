#include <stdio.h>

int main() {
    float usDollar;
    printf("Enter a US Dollar: ");
    scanf_s("%f", &usDollar);
    getchar();

    float euroConvert = usDollar * 0.91;
    float yenConvert = usDollar * 148.49;
    float britishPoundConvert = usDollar * 0.76;
    float vietnameseConvert = usDollar * 24.770;

    printf("Enter a number to calculate\n");
    printf("1. Euro \n2. Japanese Yen \n3. British Pound \n4.Vietnamese Dong \n");
    printf("Your choice: ");

    int choice;
    Choice:
        scanf_s("%d", &choice);
        getchar();

    switch (choice) {
        case 1: {
            printf("As of 4.10.2024, the price of %0.2f dollar(s) is equal to %0.2f Euro(s)",usDollar, euroConvert);
            break;
        }
        case 2: {
            printf("As of 4.10.2024, the price of %0.2f dollar(s) is equal to %0.2f Yen", usDollar, yenConvert);
            break;
        }
        case 3: {
            printf("As of 4.10.2024, the price of %0.2f dollar(s) is equal to %0.2f British Pound", usDollar, britishPoundConvert);
            break;
        }
        case 4: {
            printf("As of 4.10.2024, the price of %0.2f dollar(s) is equal to %0.2f Vietnamese Dong", usDollar, vietnameseConvert);
            break;
        }
        default: {
            printf("Invalid Choice, please try again!\n");
            goto Choice;
        }
    }
    return 0;
}