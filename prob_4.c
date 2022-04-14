/*Write a C program to input principle, time and rate (P, T, R) from the user and find Simple Interest and principal plus interest.
Example

Input

Enter principle: 1200

Enter time: 2

Enter rate: 5.4

Output

Simple Interest = 129.600006

Principal + Interest = 1329.6


           Hint: Formula to find simple interest*/
#include<stdio.h>
int main()
{
    float  principle,time,rate;
    //double rate;
    scanf("%f %f %f",&principle,&time,&rate);

    rate = (principle*time*rate)/100.0;
    printf("Simple Interest  = %f\n",rate);

    int si = principle+rate; //principle+interest
    printf("Principal + Interest = %.1f",principle+rate);

    return 0;
}
