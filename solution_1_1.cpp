#include <iostream>
#include <string>
 
using namespace std;
 
#define NUM_CHARSET 256
 
bool isUniqueString(string str) {
        int len = str.length();
        bool charset[NUM_CHARSET];
        for (int i=0;i<NUM_CHARSET;i++) charset[i]=false;
        for (int i=0;i<len;i++) {
                if (charset[str[i]]) return false;
                else charset[str[i]] = true;
        }
        return true;
}
 
int main() {
        cout << isUniqueString("aa") << endl;
        cout << isUniqueString("abc") << endl;
        cout << isUniqueString("aba") << endl;
        return 0;
}
