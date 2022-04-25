//program to find whether a number is divisible by five
#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number:");
    scanf("%d", &num);
    if (num%5 == 0)
    {
        print("The number is divisible by five");
    }
    else
    {
        print("The number is not divisible by five");
    }
    return 0;
}
