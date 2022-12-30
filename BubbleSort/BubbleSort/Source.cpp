#include<iostream>
using namespace std;

void swap(int arr[],int  a,int b) {
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}

void bubbleSort(int a[], int n) {
	for (int i = 1; i < n; i++) {
		for (int j = 1; j <= i; j++) {
			if (a[j - 1] < a[j]) {
				swap(a,(j - 1), j);
			}
		}
	}
}
