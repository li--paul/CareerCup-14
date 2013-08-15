#include <iostream>

using namespace std;

int max(int a, int b) {
        int flag = ((a-b)>>31)&0x1;
  	return (a-flag*(a-b));
}

int main() {
        cout << max(5,10) << endl;
        cout << max(4,3) << endl;
        return 0;
}
