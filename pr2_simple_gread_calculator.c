#include <stdio.h>

int main()

{
	int score;
	char gread;
	
	printf (" Enter your score : ");
	scanf  ("%d", &score);
	
	gread = (score >= 90) ?'A' : 
			(score >= 80) ?'B' :
			(score >= 70) ?'C' :
			(score >= 60) ?'D' : 
			'F';
			
	printf("Your gread is %c\n",gread);
			
	switch (gread)
	{case 'A':
		printf("\nExcellent work");
		
		break;
		
	case 'B':
		printf("\nWell done ");
		
		break;
		
	case 'C':
		printf("\nGood job");
		
		break;
		
	case 'D':
		printf("\nYou passed");
		
		break;
		
	case 'F':
		printf("\nSorry ,you are faild");
		
		break;
		
	}
	
		
		if (gread != 'F')
		{
			printf("\ncongratylation ! Tou are eligible for nrxt level .\n");
		}else{
			printf ("\nPlease try ageain next time .\n");
		}
	}