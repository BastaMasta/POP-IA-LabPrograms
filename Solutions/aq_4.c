#include <stdio.h>
#include <math.h> //incuding this only for ceil() function

int main(){

	int layers, ulim;
	printf("Enter the number of layers you want: ");
	scanf("%d", &layers);

	//loop for each layer
	for(int i = 0; i <= layers; i++){

		ulim = ceil(((i*2) + 1)/ 2); //setting the maximum value of the number in a row
		// The ceil() function acts like the greatest integer function, and returns the closest greater integer to tha value passed
		// i.e., ceil(1.2) gives 2

		for(int k = 0; k < (layers - i); k++){ //prints spaces at the beginning of the line accordingly to make it look like a pyramid
			printf(" ");
		}

		for(int p = 1; p <= ulim; p++){ //prints from 0 to upper limit number
			printf("%d",p);
		}

		for(int m = ulim-1; m>0; m--){ //prints backwards from upper limit number
			printf("%d",m);
		}

		printf("\n"); //creates new line
	}

}

