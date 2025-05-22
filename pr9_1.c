#include<stdio.h>

int main()
{
	FILE *p;
	FILE *q;
	char ch[500];
	int data[500];
	
	p=fopen("evenfile.txt","a");
	q=fopen("oldfile.txt","a");

	if(p==NULL)
	{
		printf("file not found ERROR!!!!.\n");
	
	}
	else
	{
		printf("file found .\n");
		for(int i=50; i<=70; i++){
		    if(i%2==0){
			    fprintf(p,"%d, ",i);
		    }else{
		    	fprintf(q,"%d, ",i);
			}	
		}
		printf("\nYour writin is successful");
	fclose(p);
	fclose(q);
    }	
}

/*

	file found.
	
	write success

*/