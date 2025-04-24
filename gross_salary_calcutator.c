#include <stdio.h>

int main()

	{
		int SALARY,HRA,DA,TA,total;
		
		printf (" Enter your salary : ");
		
		scanf("%d", &SALARY);
		
		HRA=10*100/SALARY;
		
		printf ("\nHRA : %d", HRA);
		
		DA=5*100/SALARY;
		
		printf ("\nDA = %d",DA);
		
		TA=8*100/SALARY;
		
		printf ("\nTA = %d",TA);
		
		total = SALARY + HRA + DA + TA;
		
		printf("\nthis is your total salary : %d", total);
		
	}