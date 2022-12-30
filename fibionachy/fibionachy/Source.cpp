#include<iostream>
using namespace std;

int recfib(int n) {
	if (n <= 1)
		return n;
	return recfib(n - 1) + recfib(n - 2);
}
int main() {
	cout << recfib(9);
	return 0;
 }