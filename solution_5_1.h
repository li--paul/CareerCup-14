
int setBits (int n, int m, int i, int j) {
	int left = (~0)<<j;
	int right = (~0)>>(32-i);
	int mask = left | right;
	
	return (n&mask)|(m<<i);
}
