#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

bool isPalindrome(int x);

int main() {
    int num;
    printf("Enter the number to check if it is a palindrome or not: ");
    scanf("%d", &num);

    if (isPalindrome(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}

bool isPalindrome(int x) {
    if (x < 0) {
        return false;
    }

    int temp = x;
    int sum = 0;

    while (temp != 0) {
        int rem = temp % 10;

        if (sum > (INT_MAX - rem) / 10) {
            return false;
        }

        sum = sum * 10 + rem;
        temp = temp / 10;
    }

    return x == sum;
}
