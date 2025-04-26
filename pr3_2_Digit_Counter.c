#include<stdio.h>

int main()

{
	int num,rim,couent;
	
	printf("Enter any numbeer : ");
	scanf("%d" ,&num);
	
	while(num>0)
	{
		rim = num % 10;
		num = num / 10;	
	
		couent++;
	}
	
	printf("\nThis is totel digit : %d", couent);
}

//Enter any numbeer : ________

//This is totel disit : _____

