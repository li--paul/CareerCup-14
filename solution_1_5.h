char* replaceSpace(char* str, int len) {
	if (!str) return 0;
	int countSpace = 0;
	for (int i=0;i<len;i++)
		if (str[i]==' ') countSpace++;
	char* newStr = new char(len+countSpace*2+1);
	int current = 0;
	for (int i=0;i<len;i++) {
		if (str[i]!=' ') {
			newStr[current] = str[i];
			current += 1;
		} else {
			newStr[current] = '%';
			newStr[current+1] = '2';
			newStr[current+2] = '0';
			current += 3;
		}
	}
	newStr[current] = '\0';
	return newStr;
}
