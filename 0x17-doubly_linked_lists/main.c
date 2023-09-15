#include <stdio.h>
#include <stdbool.h>

bool is_palindrome(int n) {
    int reversed = 0;
    int original = n;

    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed == original;
}

int main() {
    int largest_palindrome = 0;
    int a, b;

    for (int i = 100; i <= 999; i++) {
        for (int j = 100; j <= 999; j++) {
            int product = i * j;

            if (is_palindrome(product) && product > largest_palindrome) {
                largest_palindrome = product;
                a = i;
                b = j;
            }
        }
    }

    printf("%d = %d x %d\n", largest_palindrome, a, b);
    return 0;
}
