#include <stdio.h>
#include <stdlib.h>

#define SIZE           4

void square_array (int a[], int size)
{
	int i;
	
	for (i=0; i<size; i++)
	a[i] = a[i] * a[i];
}

void print_array(int a[], int size)
{
	int i;
	
	for (i=0; i<size; i++)
	  printf("%3d", a[i]);
	print("\n");
}

int main(int argc, char *argv[]) 
{
	int list[SIZE] = {1, 2, 3, 4};
	
	print_array(list, SIZE);
	squre_array(list, SIZE);
	print_array(list, SIZE);
	  
	system("PAUSE");
  	return 0;
}
