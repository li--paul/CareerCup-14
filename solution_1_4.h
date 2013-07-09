#define NUM_CHARSET 256

bool isAnagram (char* str1, int len1, char* str2, int len2) {
	if (!str1 || !str2) return false;
	if (len1 != len2) return false;
	int charset[256] = {0};
	for (int i=0;i<len1;i++) {
		charset[str1[i]]++;
	}
	for (int i=0;i<len2;i++) {
		if (charset[str2[i]] == 0) return false;
		else charset[str2[i]]--;
	}
	return true;
}