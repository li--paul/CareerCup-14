#include <iostream>

int fibonacci(int n) {
	if (n==1) return 1;
	if (n==2) return 2;
	return fibonacci(n-1)+fibonacci(n-2);
}

int main() {
	for (int i=1;i<=10;i++) {
		cout << fibonacci(i) << endl;
	}
	return 0;
}
