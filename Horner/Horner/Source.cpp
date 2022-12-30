#include<iostream>
using namespace std;

//a -> zarayeb

int HornerR(int a[], int n, int x, int index)
{
	if (index == n) return a[n];
	else
		return x * HornerR(a, n, x, index + 1) + a[index];
}

int main() {
	int a[3] = { 3,2,1 };
	int x = 2;
	int n = 3;
	cout << HornerR(a, n, x, 0);
	return 0;
}