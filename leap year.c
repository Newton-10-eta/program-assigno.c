// program to find if the year is leap or  not
#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year\n");
    scanf("%d", &year );
    if(year%100==0  && year%4==0)
    {
        printf("%d is a leap year\n", year);
    }
    else
    {
        printf("%d is not a leap year\n", year);
    }
    return 0;

}
