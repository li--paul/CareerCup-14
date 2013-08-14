#include <iostream>

bool isGood (int n) {
	if ((n&(n-1))==0) return true;
	else return false;
}

int main() {
	for (int i=1;i<100;i++) {
		if (isGood(i)) cout << i << endl;
	}
	return 0;
}
