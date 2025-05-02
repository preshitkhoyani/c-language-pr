#include<stdio.h>

int main()

{
	int n;
	
	
	printf("Enter array size :  ");
	scanf("%d" , &n);
	
	int arr[n];
	
	for(int i = 0 ;i < n ; i++)
	{
		printf("Enter array [%d] : ",i);
		scanf("%d",&arr[i]);
	}
	
	int esum,osum;

	for(int  i = 0 ;i < n ; i++)
	{
		if(arr[i] % 2 == 0)
		{
			esum += arr[i];
		}
		else
		{
			osum += arr[i];
		}
	}
	printf("Totle of even number sum is : %d",esum);
	
	printf("\nTotle of odd number sum is : %d",osum);
}