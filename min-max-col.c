/*
   Computes the maxmimum of the  minimum of each column,
   but through a row-by-row traversal.
*/

int minmaxcol(int **A, int m, int n) {

  int amin[m] = {INT_MAX};
  int amaxmin = 0;

  for(int i = 0; i < n; i++) {
	amaxmin = 0;

	for(int j = 0; j < m; j++) {
	  amin[j] = min (amin[j], A[i][j]);
	  amaxmin = max(amaxmin, amin);
	}
  }
  return amaxmin;
}
