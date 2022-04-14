/*Write a C program to input temperature in degree Fahrenheit and convert it to degree Centigrade.
Example

Input

Temperature in fahrenheit = 205

Output

Temperature in celsius = 96.11 C


Hint: Formula to convert from degree Fahrenheit to degree Celsius is given by */

#include<stdio.h>
int main()
{
    float temp,fahrenheit,celsius;
    printf("Temperature in fahrenheit = ");
    scanf("%f",&fahrenheit);

    celsius =(fahrenheit-32)*5/9;
    printf("Temperature in celsius = %.2f C",celsius);


    return 0;
}
