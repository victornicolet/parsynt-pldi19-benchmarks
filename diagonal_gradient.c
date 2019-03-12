/*
  Another gradient variation : the gradient is diagonal and
  vertical plus horizontal. The darkest point is on the top
  left corner.
*/

int dgrad(int **A, int m, int n) {

  _Bool b = 1;

  for(int i = 0; i < n - 1; i++) {
	for(int j = 0; j < m - 1; j++) {
	  b = b && (A[i+1][j+1] < A[i][j])
		&& (A[i][j+1] < A[i][j])
		&& (A[i+1][j] < A[i][j]);
	}
  }

  return b;
}
