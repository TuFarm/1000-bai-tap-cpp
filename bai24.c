/*Bai 24 - Liet ke tat ca cac uoc so le cua so nguyen duong n*/

#include <stdio.h>
int main() {
    int n;
    do {
        printf("Enter a number: ");
        scanf_s("%d", &n);
        if (n <= 0) {
            printf("Invalid Input, Try again!\n");
        }
    } while (n <= 0);

    int i = 1;
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            if (i % 2 == 1) {
                printf("%d ", i);
            }
        }
    }
    return 0;
}
