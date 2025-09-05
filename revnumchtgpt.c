#include <stdio.h>

int main() {
    int num, rev, x;  // Only 3 variables allowed

    // Input section
    printf("Enter a 4-digit number: ");
    scanf("%4d", &num);  // Corrected scanf format

    // Extracting and rearranging digits mathematically
    x = num % 10 * 1000;  // Extract last digit (units place) and move to first
    num = num / 10;       // Remove last digit

    rev = x + (num % 10 * 100); // Extract third digit (tens place) and move to second
    num = num / 10;             // Remove third digit

    rev = rev + (num % 10 * 10); // Extract second digit (hundreds place) and move to third
    num = num / 10;              // Remove second digit

    rev = rev + num;  // Remaining digit (thousands place) stays at last

    // Output the reversed number
    printf("Reverse of the given number is: %d\n", rev);

    return 0;
}
