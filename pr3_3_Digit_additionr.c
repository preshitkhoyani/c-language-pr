#include<stdio.h>

int main()

{
	int num,first,last,sum;
	
	printf("Enter any numbeer : ");
	scanf("%d" ,&num);
	
		last = num % 10;
		first = num;
		
	while(first>=10)
	{

		first /=  num;
	}
	
	sum = first + last ;
	
	printf("\n Sum of first and last digit : %d",sum);
}

//output
55//
//Enter any num :______
//
//Sum of first and last digit : __