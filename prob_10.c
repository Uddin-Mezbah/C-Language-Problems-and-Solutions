/*Write a C program that accepts two item’s weight (floating points' values ) and number of purchase (floating points' values) and calculate the average value of the items.
        Expected Input/Output:

Weight - Item1: 15

No. of item1: 5

Weight - Item2: 25

No. of item2: 4

Expected Output:

Average Value = 19.444444


Hint: Find the total weight and total number of objects and then use it to find the average.  */
#include <stdio.h>
int main()
   {

	double item1,item2,weight1,weight2,average;

    printf("Weight - Item1: ");
	scanf("%lf", &item1);

	printf("No. of item1: ");
	scanf("%lf", &item2);

	printf("Weight - Item2: ");
	scanf("%lf", &weight1);

	printf("No. of item2: ");
	scanf("%lf", &weight2);

	//float wi1, ci1, wi2, ci2, result;
	average  = ((item1 * item2) + (weight1 * weight2)) / (item2 + weight2);
	printf("Average Value = %lf\n",average);

	return 0;
}
