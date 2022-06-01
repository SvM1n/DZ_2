#include <iostream>
using namespace std;

void changing(int* a1, int* a2) {
	int temp = *a1;
	*a1 = *a2;
	*a2 = temp;
}

void increasing(int* a1, int* a2) {
	if (*a1 > *a2) {
		swap(*a1, *a2);
	}
}

void nongrowth(int* a1, int* a2) {
	if (*a1 < *a2) {
		swap(*a1, *a2);
	}
}

/*
int sum (int *arr, int k){
	int c =0;
	for (int i=1; i<k; i++){
		c+=arr[i];
	}
	return c;
}
*/

/*
void (*select(int *arr, int c0))(int *arr, int c0){
	int (*mas[])(int x, int y) = {changing, increasing, nongrowth};
	if (arr[0] == c){
		return changing;
	}
	else if (arr[0] > c){
		return changing;
	}
	else {
		return nongrowth;
	}
}

*/

void func(int* ar, const int size, void(*ch)(int*, int*)) {

	for (int i = 0; i < size - 1; i++) {
		for (int k = i; k < size; k++) {
			ch(&ar[i], &ar[k]);
		}
	}

}
