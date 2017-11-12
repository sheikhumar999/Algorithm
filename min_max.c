 // program to calculate min. and max. from an array
 
 #include<stdio.h>
 
 void main()
 {
	 
	 int arr[6], min, max, i;
	 
	 min=arr[0];
	 max=arr[0];
	 
	 printf("enter the array elements\n");
	 
		for(i=0;i<6;i++)
		{
		scanf("%d", arr[i]);
		}
		
		for(i = 0;i<6;i++)
		{
			
			if(arr[min] < arr[i])
			{
				
				printf("%d is min.",min);
			}
			
		}
 }