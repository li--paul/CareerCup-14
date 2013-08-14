#include <iostream>
#include <string>

#define NUM_CHARSET 256

bool isAnagram (string str1, string str2) {
    	int len1 = str1.length();
    	int len2 = str2.length();
    
	if (len1 != len2) return false;
    
	int charset[NUM_CHARSET];
    	for (int i=0;i<NUM_CHARSET;i++) charset[i] = 0;
    
	for (int i=0;i<len1;i++) {
		charset[str1[i]]++;
	}
	for (int i=0;i<len2;i++) {
		if (charset[str2[i]] == 0) return false;
		else charset[str2[i]]--;
	}
	return true;
}

int main() {
    	string str1 = "aabcddefgg";
    	string str2 = "aaggddefbc";
    	string str3 = "aaagddbcfe";
    	cout << isAnagram(str1,str2) << endl;
    	cout << isAnagram(str3,str2) << endl;
    	cout << isAnagram(str1,str3) << endl;
    	return 0;
}
