/* Computes the maximum of the minimums of each
   line. Only scalars in this simple example.
*/

int min_max(int **A, int m, int n) {
  int amin = INT_MAX;
  int amaxmin = INT_MIN;

  for(int i = 0; i < n; i++) {
	amin = 0;
	for(int j = 0; j < n; j++) {
	  amin = min (amin, A[i][j]);
	}
	amaxmin = max(amaxmin, amin);
  }
  return amaxmin;
}
