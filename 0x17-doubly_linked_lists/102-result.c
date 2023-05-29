#include <stdio.h>

/**
 * is_palindrome - hecks if a number n is a palindrome by reversing its digits
 * and comparing it with the original number
 * Return: 0 on sucess
 */ 
int is_palindrome(int n)
{
    int reverse = 0;
    int original = n;

    while (n > 0) {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;
    }

    return (original == reverse);
}

int main(void)
{
    int largest_palindrome = 0;

    for (int i = 999; i >= 100; i--) {
        for (int j = i; j >= 100; j--) {
            int product = i * j;
            if (product > largest_palindrome && is_palindrome(product)) {
                largest_palindrome = product;
            }
        }
    }

    // Save the result to a file
    FILE *file = fopen("102-result", "w");
    if (file != NULL) {
        fprintf(file, "%d", largest_palindrome);
        fclose(file);
    }

    return (0);
}
