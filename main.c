#include <stdio.h>
#include <stdlib.h>

int clean_stdin(){

	while (getchar()!='\n');
	return 1;
}

int askNumber(void){

	int i;
	do{
		scanf("%d", &i);
		clean_stdin();
		
	}
	while(i < 1 || i > 10);

	return i;
}


int main(void){

	printf("From how many numbers do you want to average (1-10)?\nGive an integer: ");
	int i = askNumber();
	int *numbers = (int *) malloc(i * sizeof(int));
	//printf("Input the numbers: ");
	
	printf("\n%d\n", i);
	free(numbers);
	
	return 0;
}	
