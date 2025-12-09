#include <stdio.h>

int main() {
    int r, g, b;
    char hex_digits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', 
                           '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    printf("Enter R, G, B value\n");

    scanf("%d %d %d", &r, &g, &b);

    printf("\nThe hex code is #");

    printf("%c", hex_digits[r / 16]);

    printf("%c", hex_digits[r % 16]);

    printf("%c", hex_digits[g / 16]);
    printf("%c", hex_digits[g % 16]);

    printf("%c", hex_digits[b / 16]);
    printf("%c", hex_digits[b % 16]);

    printf("\n");

    return 0;
}

