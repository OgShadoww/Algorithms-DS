#include <stdio.h>

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int arr[], int n) {
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n-1; j++) {
			if(arr[j] > arr[j+1]) {
				swap(&arr[j], &arr[j+1]);
			}
		}
	}
}

int main() {


	return 0;
}