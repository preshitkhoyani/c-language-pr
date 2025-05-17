#include <stdio.h>
#include<string.h>

int main() 

{
    char a[100];
    char *p;
    int len;

    printf("Enter any string: ");
    gets(a); 

    p = a;

    for (len = 0; *p != '\0'; );
    {
    	
		for (*p != '\n'; p++, len++;)
		{
   				 printf("\nThe length of a string is: %d\n", len);
		}
	}


}
/*
Enter any string: hello world
The length of a string is: 11
*/