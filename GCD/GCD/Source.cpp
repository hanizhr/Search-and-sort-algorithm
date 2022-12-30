#include<iostream>
using namespace std;
int gcd(int x, int y) {
	if (y == 0) {
		return x;
	}
	return (y, (x % y));
}

int main() {
	cout << gcd(35, 14);
	return 0;
}