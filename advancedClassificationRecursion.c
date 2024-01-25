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
    int count=0;
    if (num == 0)
        return 0;
    return count=1+countDigits(num/10);
}

// calculate the reverse num of the original num
int reverse(int num)
{
    int newNum = 0, temp = num, digit = countDigits(num)-1;
    while(temp != 0)
    {
        newNum = newNum + temp%10*power(10,digit);
        temp = temp/10;
        digit--;
    }  
    return newNum;  
}

// Recursive function to check if a number is a palindrome with 2 peremters (the original num and the reverse num)
int checkIsPalindrome(int reverse, int num)
{
    if(num == 0)
        return 1;
    if((num%10) != (reverse%10))
        return 0;
    else
        return checkIsPalindrome(reverse/10, num/10);
}

//Recursive function with the sign that you want
int isPalindrome(int num)
{
    int newNum = reverse(num);
    if(checkIsPalindrome(newNum, num))
        return 1;
    return 0;
}

// Recursive Function with 2 peremetrs to calculate Armstrong of the num
int CalArm(int num , int digits){ 
    if(num==0)
        return 0; // If the num is 0 so there's no sum act
    return (power(num%10, digits) + CalArm(num/10,digits)); // Start with the unit and than contiue
}


//Recursive Function which brings true or false if num is Armstrong
int isArmstrong(int num){
    int digits = countDigits(num);
    if (CalArm(num,digits)==num) // Check if the calculated Armstrong of the num == num
        return 1;
    else
        return 0;
}

