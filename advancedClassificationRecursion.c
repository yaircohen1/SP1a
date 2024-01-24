#include <stdio.h>
#include "NumClass.h"

int power(int num, int k)
{
    // Base case: The power of 0 is 1
    if (k == 0)
        return 1;

    // Recursive case: num^k = num * num^(k-1)
    return num * power(num, k - 1);
}

// Function to calculate the number of digits in a number
int countDigits(int num)
{
    if (num == 0)
        return 0;
    return 1 + countDigits(num/10);
}

// Recursive function to check if a number is a palindrome with 2 peremters
int checkIsPalindrome(int num, int numDigits)
{
    // Base case: a single-digit is a palindrome
    if (numDigits == 1)
        return 1;

    // Base case: check if the first and last digits are the same
    if (num / power(10, numDigits - 1) == num % 10)
    {
        // Remove the first and last digits and check the remaining number
        return checkIsPalindrome((num % power(10, numDigits - 1)) / 10, numDigits - 2);
    }

    return 0; // Not a palindrome
}

// The function with the sign that you want
int isPalindrome(int num)
{
    int numDigits = countDigits(num);
    return checkIsPalindrome(num, numDigits);
}

// Recursive Function with 2 peremetrs to calculate Armstrong of the num
int CalArm(int num , int digits){ 
    if(num==0)
        return 0; // If the num is 0 so there's no sum act
    return (power(num%10, digits) + CheckisArm(num/10,digits)); // Start with the unit and than contiue
}


//Recursive Function which brings true or false if num is Armstrong
int isArmstrong(int num){
    int digits = countDigits(num);
    if (CalArm(num,digits)==num) // Check if the calculated Armstrong of the num == num
        return 1;
    else
        return 0;
}

