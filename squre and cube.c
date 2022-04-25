#include<stdio.h>
float cube (float num);
float square(float x);
int main()
{
    float input, output, output_2;
    printf("Enter a number: ");
    scanf("%f", &input);

    output =cube(input);
    output_2 = square(input);
    printf("\n The cube of %f is %f", input, output);
    printf("\n The square of %f is %f ", input, output_2);

    return 0;

}
float cube(float num)
{
    float num_cubed;
    num_cubed =num* num * num;
    return num_cubed;
}
float square(float x)
{
    float num_squared;
    num_squared = x * x;
    return num_squared;
}
