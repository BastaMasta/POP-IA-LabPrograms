#include <stdio.h>
#include <stdbool.h>
#include <string.h>

double calc_rate(int units){
	double k;
	switch(units > 200){

		case false:
			return 0.80*units;

		case true:
			switch(units > 300){

				case false:
					return 200*0.8 + (units-200)*0.90;

				case true:
					switch(units > 400){

						case false:
							return 200*0.8 + 100*0.9 + (units-300)*1;

						case true:
							return (200*0.8 + 100*0.9 + (units-300)*1)*1.15;
					}
			}
	}
}

int main(){
	char name[200];
	int units;
	printf("Please enter your name:\n");
	fgets(name, sizeof(name), stdin);
	name[strcspn(name, "\n")] = 0;
	printf("Enter the number of units consumed:");
	scanf("%d",&units);
	printf("The total electricity bill for %s is %.2lf\n", name, calc_rate(units));
}
