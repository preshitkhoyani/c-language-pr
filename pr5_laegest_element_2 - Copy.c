#include<stdio.h>

int main()
{
	

   
	int a[3][3];
   
    printf("Enter array elements: \n");
    
    
	for(int i=0; i<3; i++)
	{ 
	   for(int j=0; j<3; j++){
	   printf("a[%d][%d]= ",i,j);
	   scanf("%d",&a[i][j]);
       }

    }
    
    	for(int i=0; i<3; i++)
	{ 
	   for(int j=0; j<3; j++){
	   printf("%d\t",a[i][j]);
	   
       }
       printf("\n");
    }
    
     int max = a[0][0];
    for(int i = 0; i < 3; i++)
	 {
        for(int j = 0; j < 3; j++) 
		{
            if(a[i][j] > max) 
			{
                max = a[i][j];
            }
        }
    }

    printf("\nThe largest element is: %d\n", max);
}