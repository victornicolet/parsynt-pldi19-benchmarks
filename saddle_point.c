/*
  Returns true if the matrix has a saddle point.
  The matrix has a saddle point if the max of the mins of the columns
  is less than the min of the max of the columns.
*/

_Bool saddle_point(int **A, int n, int m) {
  int* colm[m] = {0};
  int mcols = INT_MIN;
  int xrows = INT_MAX;
  int rowx = INT_MIN;

  for(int i = 0; i < n; i++) {
	rowx = MIN_INT;
	for(int j = 0; j < m; j++) {
	  rowx = max(rowx, A[i][j]);
	  colm[j] = min(colm[j], A[i][j]);
	  mcols = max(colm[j], mcols);
	}
	xrows = min(rowx, xrows);
  }
  return (xrows >= mcols);
}
