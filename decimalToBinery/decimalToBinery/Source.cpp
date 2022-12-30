#include<iostream>
using namespace std;

int DTB(int dcimal) {
	if (dcimal == 0) {
		return 0;
	}
	else
	{
		return ((dcimal % 2) + (10 * (DTB(dcimal / 2))));
	}
}

int main() {
	cout << DTB(123);
	return 0;
}