#include <stdio.h>

int main() {
 


    int w,a[5];

    printf("Enter array elements :\n");
    for (int i = 0; i < 5; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("Negetive elements in this array :");
	for(w=0;w<=5;w++)
	{
	
    if(a[w]<0)
    {	
    	printf(",%d ", a[w]);
	}
	}
}
/*
	Enter array elements :
a[0] = 5
a[1] = -66
a[2] = -9
a[3] = 6
a[4] = -69
Negetive elements in this array :-66 ,-9 ,-69
*/

