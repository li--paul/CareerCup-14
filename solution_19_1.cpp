#include <iostream>

void swap(int &a, int &b) {
	b = b-a;
	a = b+a;
	b = a-b;
}

int main() {
	int a = 19;
	int b = 7;
	swap(a,b);
	cout << a << " " << b << endl;
	return 0;
}
