
int printMatrix(int* matrix, int m, int n) {
	if (!matrix) return 0;
	for (int i=0;i<m;i++) {
		for (int j=0;j<n;j++)
			std::cout << matrix[i*n+j] << " ";
		std::cout << std::endl;
	}
	return 1;
}

int setZeros(int* matrix, int m, int n) {
	if (!matrix) return 0;
	bool* row = new bool[m];
	bool* col = new bool[n];
	for (int i=0;i<m;i++) row[i] = false;
	for (int j=0;j<n;j++) col[j] = false;
	for (int i=0;i<m;i++)
		for (int j=0;j<n;j++)
			if (matrix[i*n+j]==0) {
				row[i] = true;
				col[j] = true;
			}
	for (int i=0;i<m;i++)
		for (int j=0;j<n;j++)
			if (row[i]||col[j]) matrix[i*n+j] = 0;
	return 1;
}
