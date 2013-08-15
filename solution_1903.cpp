#include <iostream>

using namespace std;

int numTailZeros(int n) {
        int count = 0;
        for (int i=5;n/i>0;i=i*5) {
                count += n/i;
        }
	return count;
}

int main() {
        cout << numTailZeros(26) << endl;
        return 0;
}
