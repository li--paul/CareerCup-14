#include <iostream>

int setBits (int n, int m, int i, int j) {
	int left = (~0)<<j;
	int right = (~0)>>(32-i);
	int mask = left | right;
	
	return (n&mask)|(m<<i);
}

int main() {
	int N = 0x400;
	int M = 0x015;
	cout << setBits(N,M,2,6) << endl;
	return 0;
}
