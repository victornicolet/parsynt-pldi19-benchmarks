int nsum(int** A, int n) {
  int sum = 0;
  int sumbis = 0;
  for (int i = 0; i < n; i++) {
	sum = 0;
    for(int j = 0; j < n; j++){
          sum += A[i][j];
    }
    sumbis += sum;
  }
  return sumbis;
}
