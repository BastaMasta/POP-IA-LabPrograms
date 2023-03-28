#include <stdio.h>

void swap_chr(char * a, char * b){
	char temp = *a; *a = *b; *b = temp;
}

void bubble_sort_char(char a[], int size){
	for(int i = 0; i < size -1; i++){
		for(int j = 0; j < size - i - 1; j++){
			if(a[j] > a[j+1]){
				swap_chr(&a[j], &a[j+1]);
			}
		}
	}
}

void print_char_arr(char a[], int size){
	for(int i = 0; i < size; i++){
		printf("%c  ", a[i]);
	}
}

int main(){
	char k[] = {'a', 't', 'k', 'o', 'A', 'q', 'U', 'z', 'Z'};
	bubble_sort_char(k, 9);
	print_char_arr(k, 9);
	printf("\n");
}
