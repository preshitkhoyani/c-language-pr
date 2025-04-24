#include<stdio.h>

int main()

	{
		int cornera,cornerb,cornerc, a;
		a=180;
		
		printf("Enter valu of corner a :");
		
		scanf("%d", &cornera);
		
		printf("Enter valu of corner b :");
		
		scanf("%d", &cornerb);
		
		cornerc  = a-(cornera+cornerb);
		
		printf("This is valu of third corner:%d",cornerc);
		
		
	}