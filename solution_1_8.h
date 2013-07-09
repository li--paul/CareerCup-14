
bool isSubstring (char* str1, int len1, char* str2, int len2) {
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

bool isRotation (char* str1, int len1, char* str2, int len2) {
	if (!str1||!str2) return false;
	if (len1!=len2) return false;
	char* newStr = new char[len2*2+1];
	for (int i=0;i<len2;i++) {
		newStr[i] = str2[i];
		newStr[len2+i] = str2[i];
	}
	newStr[len2*2] = '\0';
	if (isSubstring(str1,len1,newStr,len2*2)) return true;
	else return false;
}
