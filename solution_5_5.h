
int numBits (int n, int m) {
	unsigned int xor2 = n^m;
	int num = 0;
	while (xor2>0) {
		if (xor2&0x1>0) num++;
		xor2 = xor2 >> 1;
	}
	return num;
}
