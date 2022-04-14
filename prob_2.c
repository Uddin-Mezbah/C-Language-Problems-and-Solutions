/*Write a C program that accepts two integers from the user and calculate the product of the two integers.
Expected Input/Output:

Input the first integer: 25

Input the second integer: 15

Expected Output:

Product of the above two integers = 375*/

#include<stdio.h>
int main(){

    int n,f;
    scanf("%d %d",&n,&f);
    printf("Product of the above two integers  = %d\n",n*f);

    //int result = n*f;
   // printf("Product of the above two integers  = %d\n",result);

    return 0;
}
