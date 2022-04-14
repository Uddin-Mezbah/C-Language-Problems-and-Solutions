/*Write a C program that takes a positive float number and outputs its integer part and real part.
        Expected Input/Output:

                Enter Number: 3.578

                Integer part: 3

                Real part: .578

Hint: To find the real part, you can subtract the integer part from the number.*/

#include<stdio.h>
int main(){
    double num,result;
    printf("Enter Number: ");
    scanf("%lf",&num);
    int a= (int)num;
    result=num-a;
    printf("Integer part: %d\nReal part: %.3lf",a,result);
    return 0;
}
