#include <stdio.h>

int binarySearch(int x, int v[], int n){

	int low, mid, high;

	low = 0;
	high = n - 1;
	while(low <= high){
		mid = (low + high) / 2;
		if(x < v[mid]){
			high = mid + 1;
		} else if(x > v[mid]) {
			low = mid + 1;
		} else {
			return v[mid];
		}
	}

	return -1;

}

int main(){


	int x = 2;
	int toSearch[5] = {1, 2, 3, 4, 5};
	int size = 5;
	int result = binarySearch(x, toSearch, size);

	printf("%d", result);

	return 0;

}  
