#include <stdio.h>
#include <stdlib.h>
#define NUM_OF_ELEMENTS 10

void printArray(int array[], int size);
int calculateSum(int array[], int size);
float calculateAverage(int array[], int size);
void reverseValues(int array[], int size);

int main()
{
	/*local variable definition*/
	int i,ar[10],sum;
	float avg;

	printf("Enter 10 integers: ");
	for(i=0; i<NUM_OF_ELEMENTS; i++)
		scanf_s("%d",&ar[i]);

	/*calling a function to display the contents of the array*/
	printArray(ar, NUM_OF_ELEMENTS);

	/*calling a function to calculate and return the sum of all the elements in the array*/
	sum=calculateSum(ar, NUM_OF_ELEMENTS);
	printf("\nThe sum of the array elements is %d\n",sum);

	/*calling a function to calculate and return the average of all the elements in the array*/
	avg=calculateAverage(ar, NUM_OF_ELEMENTS);
	printf("\nThe average of the array elements is %.2f\n",avg);

	/*calling a function to reverse the numeric value of each array element*/
	reverseValues(ar, NUM_OF_ELEMENTS);

	system("pause");
	return 0;
}

/*function to display the contents of the array*/
void printArray(int array[], int size)
{
	printf("\nThe array contains: ");
	for(int i=0; i<size; i++)
		printf("%d ",array[i]);

	printf("\n");
}

/*function to calculate and return the sum of all the elements in the array*/
int calculateSum(int array[], int size)
{
	/*local variable definition*/
	int sum=0;
	for(int i=0; i<size; i++)
		sum+=array[i];
	return sum;
}

/*function to calculate and return the average of all the elements in the array*/
float calculateAverage(int array[], int size)
{
	/*local variable definition*/
	int sum;
	float avg;
	sum=calculateSum(array, NUM_OF_ELEMENTS);
	avg=(float)sum/NUM_OF_ELEMENTS;
    return avg;
}

/*function to reverse the numeric value of each array element*/
void reverseValues(int array[], int size)
{
	/*local variable definition*/
	int a,b,i;
	printf("\nReversing the values.");
	printf("\nThe array now contains: ");

	for(i=0; i<NUM_OF_ELEMENTS; i++)
	{
		b=array[i]/10;
		a=array[i]%10;
		array[i]= (10*a)+b;
	}

	for(i=0; i<NUM_OF_ELEMENTS; i++)
		printf("%d ",array[i]);
	printf("\n\n\n");
}