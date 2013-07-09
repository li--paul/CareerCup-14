int printImage (int* image, int len) {
	if (!image) return 0;
	for (int i=0;i<len;i++) {
		for (int j=0;j<len;j++)
			std::cout << image[i*len+j] << ' ';
		std::cout << std::endl;
	}
	return 1;
}

int rotateImageCW(int* image, int len) {
	if (!image) return 0;
	if (len == 1) return 1;
	int temp = 0;
	for (int layer=0;layer<len/2;layer++) {
		int top_left = layer*len+layer;
		int top_right = layer*len+len-layer-1;
		int bot_left = (len-layer-1)*len+layer;
		int bot_right = (len-layer)*len-layer-1;
		for (int i=0;i<len-2*layer-1;i++) {
			temp = image[bot_left-i*len];
			image[bot_left-i*len] = image[bot_right-i];
			image[bot_right-i] = image[top_right+i*len];
			image[top_right+i*len] = image[top_left+i];
			image[top_left+i] = temp;
		}
	}
	return 1;
}
