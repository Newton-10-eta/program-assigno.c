//program to find the discount for the goods worth 1000
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter total spend ");
    scanf("%d", &a);
    if (a >=1000)
        b= (a * 10/100 );
    c=a-b;
    {
        printf("\nYou should pay sh %d" ,c);
    }

    {
        printf("There is no discount you should pay %d" ,a);
    }
    return 0;
}
