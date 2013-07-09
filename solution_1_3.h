int removeDuplicate(char* str, int len) {
	if (!str) return 0;
	if (len < 1) return 0;
	if (len == 1) return 1;
	
	int probe = 1;
	int tail = 1;
	bool exist = false;
	for (probe=1;probe<len;probe++) {
		exist = false;
		for (int i=0;i<tail;i++) {
			if (str[i]==str[probe]) exist = true;
		}
		if (!exist) {
			str[tail] = str[probe];
			tail++;
		}
	}
	str[tail] = '\0';
	return 1;
}