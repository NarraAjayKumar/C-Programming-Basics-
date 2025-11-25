#include <stdio.h>

int main() {
    int n, flag = 1;
    printf("Enter the number: ");
    scanf("%d", &n);

    if (n <= 1) {
        flag = 0; // Numbers <= 1 are not prime
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                flag = 0; // n is not prime
                break;
            }
        }
    }

    if (flag == 1) {
        printf("Given number is prime\n");
    } else {
        printf("Given number is not prime\n");
    }

    return 0;
}
