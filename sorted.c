_Bool is_sorted(int **A, int n, int m) {
  int prev = INT_MIN;
  _Bool iss = 0;

  for(int i = 0; i < n; i++) {
	for(int j = 0; j < m; j++) {
	  iss = iss && (A[i][j] > prev);
	  prev = A[i][j];
	}
  }

  return iss;
}
