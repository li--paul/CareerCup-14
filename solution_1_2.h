void reverseString(char* str, int len) {
	if (!str) return;
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