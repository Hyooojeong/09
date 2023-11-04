#include <stdio.h>
#include <stdlib.h>

#define N_STUDENT 5 

int main(int argc, char *argv[]) {
	
	int i;
	int grade[N_STUDENT];
	printf("input 5 scores: ");
	
	for(i=0; i<N_STUDENT; i++)
	  scanf("%d", &grade[i]);
    
    for(i=0; i<N_STUDENT;i++)
      printf("grade[%d] = %d\n", i ,grade[i]);
      
    system("PAUSE");
	return 0;
}
