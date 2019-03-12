/*
   Check if the matrix is a horizontal gradient, that is
   if all the rows are sorted.
*/

_Bool hgrad(int **A, int m, int n) {

  _Bool b = 1;

  for(int i = 0; i < n; i++) {
	for(int j = 0; j < m - 1; j++) {
	  b = b && (A[i][j+1] > A[i][j]);
	}
  }

  return b;
}
