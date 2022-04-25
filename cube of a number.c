//function to calculate the cube of a number
#include<stdio.h>
float cube (float nun);
int main()
{
    float input, output;
    printf("Enter a number:");
    scanf("%f", &input);
    output= cube(input);
    printf("\n The cube of %f is %f", input, output);
    return 0;
}
float cube (float num)
{
    float num_cubed;
    num_cubed =num*num*num;
    return num_cubed;
}

