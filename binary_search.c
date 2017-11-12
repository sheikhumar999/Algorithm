	//program for binary searchpath
	
	#include<stdio.h>

	int main()
	
	{
		 int low =0, high=9,mid, target, arr[10], i;
		 
		 int flag;
		 
		 printf("enter the array elements\n");
		 
		 for(i = 0; i < 10; i++)
		 {
			 
			scanf("%d",&arr[i]);
		 
		 }
		 
		 printf("enter the target elements\n");
		
		 scanf("%d", &target);
		 
		 while(low  <=  high)
		 {
			
		 
			 mid = (low + high) / 2;
		 
			 if(target < arr[mid])
			 {
				high = mid - 1;
				
				flag = 0;
				
			 }
			 
			 else if(target > arr[mid])
			 {
				 low = mid + 1;
				 
				 flag = 0;
			 }
			 
			 else if(arr[mid] == target)
			 {
				 

				 flag = 1;
				 break;
				 
			 }
			
		 }
			
			
			
			if(flag == 0)
			{
				printf("not found");
			}
			else
			{
				printf("element found");
			}
		 
		 return 0;
	}