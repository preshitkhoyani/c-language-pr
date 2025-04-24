#include <stdio.h>

int main()

	{
		int celsius ;
		float fahrenheit;
		
		printf ("Enter valu of celsius :");
		
		scanf ("%d" , &celsius);
		
		fahrenheit = (9/5*celsius)+32;
		
		printf("this is valu of fahrenheit : %f", fahrenheit);
	}