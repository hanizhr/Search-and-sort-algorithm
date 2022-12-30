#include<iostream>
using namespace std;

void movedisk(int count, int a, int b, int c) {
	if (count == 0) return;
	movedisk(count - 1, a, c, b);
	cout << count << " from " << a << "to" << b<<endl;
	movedisk(count - 1, c, b, a);
}
int main()
{
	int N = 3;
	movedisk(N, 1, 2, 3);
	return 0;
}