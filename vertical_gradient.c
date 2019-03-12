/*
  Check if the matrix is a vertical gradient, that is
  if all the columns are sorted vertically (decreasing).
  Possible variation: all the cells in a line should be equal.
*/

_Bool vgrad(int **A, int m, int n) {

  _Bool b = 1;

  for(int i = 0; i < n - 1; i++) {
	for(int j = 0; j < m - 1; j++) {
	  b = b && (A[i+1][j] > A[i][j]);
	}
  }

  return b;
}
