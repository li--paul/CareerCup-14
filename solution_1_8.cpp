#include <iostream>
#include <string>

bool isSubstring (string str1, string str2) {
    	int len1 = str1.length();
	int len2 = str2.length();
	int i=0;
	int j=0;
	for (i=0;i<len2;i++) {
		if (str2[i]!=str1[0]) continue;
		else {
			for (j=0;j<len1;j++) {
				if (str1[j]!=str2[i+j]) break;
			}
			if (j==len1) return true;
		}
	}
	return false;
}

bool isRotation (string str1, string str2) {
	int len1 = str1.length();
	int len2 = str2.length();
	if (len1!=len2) return false;
    	str2.insert(str2.end(),str2.begin(),str2.end());
	if (isSubstring(str1,str2)) return true;
	else return false;
}

int main() {
	cout << isRotation("waterbottle","erbottlewat") << endl;
	cout << isRotation("waterbottle","erbottlewet") << endl;
	return 0;
}
