#include<iostream>
using namespace std;

int fact(int n) {
	int res = 1, i;
	for (i = 1; i <= n; i++) {
		res *= i;
	}
	return res;
}

//recurcive :

int recfact(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n * (recfact(n - 1));
	}
}

int main() {
	cout << fact(5) << endl;
	cout << recfact(6);
	return 0;
}