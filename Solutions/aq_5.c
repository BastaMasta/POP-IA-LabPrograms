#include <stdio.h>

int binary_search(char a[], int beg, int end, char val){

    int mid;
    if(end >= beg){
        mid = (beg + end)/2;

        if(a[mid] == val){
            return mid+1;
        }
        else if(a[mid] < val){
            return binary_search(a, mid+1, end, val);
        }
        else{
            return binary_search(a, beg, mid-1, val);
        }
    }

    return -1;     
}

int main()
{
	char arr[] = {'A','S','U','Z','a','d','k','l','m','o','q','t','z'};
	int loc = binary_search(arr, 0, 13, 'l');
	printf("l is at %d th position", loc);
}
