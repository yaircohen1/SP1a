#include "NumClass.h"
#include <stdio.h>

int main() {
    int num1, num2;
    printf("Please enter 2 positive integers: ");
    scanf("%d", &num1);
    scanf("%d", &num2);
    
    if (num1 > num2){
		int temp = num1;
		num1 = num2;
		num2 = temp;
	}

    printf("The Armstrong numbers are:");
    for (int i = num1; i <= num2; i++) {
        if (isArmstrong(i)) {
            printf(" %d", i);
        }
    }
    printf("\nThe Palindromes are:");
    for (int i = num1; i <= num2; i++) {
        if (isPalindrome(i)) {
            printf(" %d", i);
        }
    }
    printf("\nThe Prime numbers are:");
    for (int i = num1; i <= num2; i++) {
        if (isPrime(i)) {
            printf(" %d", i);
        }
    }
    printf("\nThe Strong numbers are:");
    for (int i = num1; i <= num2; i++) {
        if (isStrong(i)) {
            printf(" %d", i);
        }
    }
    printf("\n");
    return 0;
}