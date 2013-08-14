#include <iostream>

int swapBits (int n) {
	int odd = 0xAAAAAAAA;
	int even = 0x55555555;
	return ((n&odd)>>1) | ((n&even)<<1);
}

int main() {
	int num = 5;
	cout << swapBits(num);
	return 0;
}
