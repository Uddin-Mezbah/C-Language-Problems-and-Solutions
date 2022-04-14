/*Write a C program to input two numbers and perform all arithmetic operations to find sum, difference,
product, quotient and modulus of two given numbers*/

#include <stdio.h>

int main() {

    int A,B;
    scanf("%d %d",&A,&B);

    int sum = A + B;
    printf("Sum = %d\n",sum);

    int Difference = A - B;
    printf("Difference = %d\n",Difference);

    int Product = A * B;
    printf("Product = %d\n",Product);

    int Quotient = A / B;
    printf("Quotient = %d\n",Quotient);

    int Modulus = A % B;
    printf("Modulus = %d\n",Modulus);


    return 0;
}
