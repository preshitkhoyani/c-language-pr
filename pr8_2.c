#include <stdio.h>


void cube(int *ptr, int size)
{
    for (int i = 0; i < size * size; i++) 
	{
        printf("%d\n", (*(ptr + i)) * (*(ptr + i)) * (*(ptr + i)));
    }
    printf("\n");
}

int main() 
{
    int size;
    printf("Enter array's size: ");
    scanf("%d", &size);

    int a[size][size];


    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }


    printf("Cubes of all elements:\n");
    cube(&a[0][0], size);


}

/*
		Enter array's size: 2
		Enter array elements:
		a[0][0] = 1
		a[0][1] = 2
		a[1][0] = 3
		a[1][1] = 4
		Cubes of all elements:
		1
		8
		27
		64
*/


