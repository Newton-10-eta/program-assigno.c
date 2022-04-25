//program to find whether a number is even or odd
#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number:");
    scanf("%d", &num);
    if (num%6 ==0)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }
    return 0;
}
