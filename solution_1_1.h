#define NUM_CHARSET 256
 
bool isUniqueString(char str[], int len) {
	bool* charset = new bool[NUM_CHARSET];
	for (int i=0;i<NUM_CHARSET;i++) charset[i]=false;
		for (int i=0;i<len;i++) {
			if (charset[str[i]]) return false;
			else charset[str[i]] = true;
	}
	return true;
}