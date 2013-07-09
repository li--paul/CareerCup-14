
int swapBits (int n) {
	int odd = 0xAAAAAAAA;
	int even = 0x55555555;
	return ((n&odd)>>1) | ((n&even)<<1);
}
