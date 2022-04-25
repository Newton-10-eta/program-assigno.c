#include<stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if(num >0)
    {
        prinf("The number is positive");
    }
    if(num <0)
    {
        prinf("The number is negative");
    }
    if(num == 0)
    {
        prinf("The number is zero");
    }
    return 0;
}
