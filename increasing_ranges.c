/*
  Checks if the range of the rows are increasing.
  In this problem, the auxliary is discovered for
  the memoryless join.
  It is reused in the parallel join.
*/
_Bool increasing_ranges(int **A, int m, int n) {
  _Bool incr = 1;

  int high = INT_MIN;
  int phigh = INT_MIN;

  for(int i = 0; i < n; i++) {
	high = INT_MIN;
	for(int j = 0; j < m; j++) {
	  if (A[i][j] <= phigh) incr = 0;
	  high = max(high, A[i][j]);
	}
	phigh = high;
  }

  return incr;
}
