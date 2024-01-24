#include <stdio.h>
#include "NumClass.h"

int power(int num, int k)
{
    int mult=1;
    if (k==0)
        return mult;
    for(int i=1; i<=k; i++)
    {
        mult = num*mult;
    }
    return mult;
}

int isPalindrome(int num) 
{
    if (num==0)
        return 1;
    int reverse = 0, tmp=num;
    for (int i=0;tmp>0;i++) 
    {
        reverse = (reverse*10) + (tmp%10);
        tmp=tmp/10;
    }
    if (reverse==num)
        return 1;
    else 
        return 0;
}

int isArmstrong(int num)
{
    int numDigit=0;
    int tmp = num;
    while (tmp>0)
    {
        numDigit++;
        tmp/=10;
    }

    int sum=0;
    for (int tmp=num;tmp>0;tmp/=10)
    {
        sum=sum+power(tmp%10,numDigit);
    }

    if (sum==num)
        return 1;
    else
        return 0;
}


