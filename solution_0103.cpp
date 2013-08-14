#include <iostream>
#include <string>

void removeDuplicate(string &str) {
    	int len = str.length();
    	if (len < 1) return;
    	if (len == 1) return;

    	for (int probe=1;probe<str.length();probe++) {
		for (int i=0;i<probe;i++) {
	            	if (str[i]==str[probe]) {
	                	str.erase(str.begin()+probe);
	                	probe--;
	            	}
        	}
    	}
}

int main() {
    	string str = "aabcddefgg";
    	removeDuplicate(str);
    	cout << str << endl;
    	return 0;
}
