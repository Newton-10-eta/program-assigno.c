// program to determine if the year is leap or not
#include<stdio.h>
int main()
{
    int year;
    printf("enter the year\n");
    scanf("%d", &year);
    if(("year%100!==o && year%4==0")||year%100==0 &&year%4==0)
    {
        printf("%d is a leap year\n", year);

    }
    else
    {
        printf("%d is not a leap year\n", year);

    }

        return 0;
}
