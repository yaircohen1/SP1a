#include <stdio.h>
#include "NumClass.h"
int isPrime(int num) 
{   
    if (num==1)
        return 1; // 1 is primary just for this exercise
    if (num<0)
        return 0;
    for(int i=2; i<num;i++)
        {
            if((num%i)==0)
            {
                return 0;   
            }
        }
        return 1;

}

int factorial(int num)
{
    int mult=1;
    if (num==0)
        return 1;

    for (int i=1; i<=num; i++)
        {
            mult=mult*i;
        }
        return mult;
}

int isStrong(int num)
{
    int sum=0, lastDigit=0;
    if(num==0)
        return 0;
    for(int i=num; i>0;i/=10)
    {
        lastDigit=i%10;
        sum=sum+factorial(lastDigit);
    }
    if(sum==num)
        return 1;
    return 0;
}

