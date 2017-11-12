/*program that takes input as array and gives minimum and maximum value in that array*/
// min and max.cab
//
#include<stdio.h>


int main()
{
int arr[10];
int min, max;
	
	printf("Enter elements in an array");
		for(int i =0 ; i<10 ; i++ )
		{
			scanf("%d",&arr[i]);
		}
		
	min = arr[0];
	max = arr[0];
	
		for(int i=1 ; i<10 ;i++)
		{
			if(arr[i] < min)
			{
				min = arr[i];
			}
			if(arr[i] > max)
			{
				max = arr[i];
			}
		}
	printf("Min and Max are %d and %d",min,max);
}