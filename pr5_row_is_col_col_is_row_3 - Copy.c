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
	   printf("%d\t",a[j][i]);
	   
       }
       printf("\n");
    }

}
/*
	Enter array elements:
a[0][0]= 1
a[0][1]= 2
a[0][2]= 3
a[1][0]= 4
a[1][1]= 5
a[1][2]= 6
a[2][0]= 7
a[2][1]= 8
a[2][2]= 9
1       4       7
2       5       8
3       6       9
*/