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
	
	printf("\nYou requested average of %d numbers.\n", i);


	int j = 0;
	int sum = 0;

	for(j=0; j < i; j++){
		printf("\nGive the number %2.2d: ", j+1);
		numbers[j]=askNumber();
		sum += numbers[j];
		}

	printf("You have inputted following numbers: \n");

	for(j=0; j < i; j++){
		printf("%d ", numbers[j]);
	}
	printf("\nSum of the numbers is: %d and the average is: %d \n", sum, sum/i);

	free(numbers);
	
	return 0;
}	
