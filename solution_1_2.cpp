#include <iostream>
#include <string>

void reverseString(string &str) {
    	int len = str.length();
	if (len <= 1) return;    
	int start = 0;
	int end = len-1;
	char temp = 0;  
	while (start<end) {
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;          
	}
}

int main() {
	string str = "abcdefg";
	reverseString(str);
	cout << str << endl;
	return 0;
}
