#include <iostream>

using namespace std;

string judgeEndian() {
        short int twoBytes = 0x0001;
        char *pOneByte = (char *)&twoBytes;
        return ((*pOneByte)?("Little Endian"):("Big Endian"));
}

int main() {
        cout << judgeEndian() << endl;
        return 0;
}
