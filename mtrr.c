/*
   Maximum top right rectangle.
   Computes the maximum top right rectangle sum in mtrr.
*/

int _mtrr(int** A, int n, int m) {
  int c[m] = {0};
  int mtr = 0;
  int mtrr = 0;
  for (int i = 0; i < n; i++) {
	mtr = 0;
    for(int j = 0; j < m; j++){
	  c[j] += A[i][j];
	  mtr = max(mtr + c[j], 0);
    }
	mtrr = max(mtr, mtrr);
  }
  return mtrr;
}
