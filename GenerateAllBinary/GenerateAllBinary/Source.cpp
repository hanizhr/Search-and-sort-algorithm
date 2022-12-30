#include<iostream>
using namespace std;

void GenerateAllBinery(int n, int arr[], int i) {
	if (i == n) {
		for (int i = 0; i < n; i++) {
			cout << arr[i];
		}
		cout << endl;
	}
	else {
		arr[i] = 0;
		GenerateAllBinery(n, arr, i + 1);
		arr[i] = 1;
		GenerateAllBinery(n, arr, i + 1);
	}
}

int main() {
	const int n = 4;
	int arr[n];
	GenerateAllBinery(n, arr, 0);
	return 0;
}