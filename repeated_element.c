    //program to search repeated elements
	
	#include<stdio.h>
	#include<stdlib.h>

	void main()
	{
		int arr[10], i, j, m = 0, flag;
		
		printf("enter array elements\n");
		
		for( i = 0; i < 10; i++)
		
		{
			
		scanf("%d", &arr[i]);	
			
		}
		
			while(m < 10)	
			
			{
				i = rand() % 10;
				
				j = rand() % 10;
				
				if((i != j) && (arr[i] == arr[j]))
				{
					
					flag=1;
					
				}
				
				else
				
				{
					flag=0;
					
				}
				
			m++;
				
			}
			
			if(flag == 1)
			
			{
			
			printf("the  %d  element repeats \n", arr[i]);
				
			}

			else

			{
				
			printf(" repeated element not found\n"); 
			
			}
	}