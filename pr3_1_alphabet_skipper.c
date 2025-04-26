#include<stdio.h>

int main()

{
	char leater = 'a';
	
	do 
	{
		printf("%c ", leater);
		leater +=4;
	}while (leater<='z');
}

// oytput : a e i m q u y
