/*
  This function checks that the ranges of all the lines are overlapping.
*/

_Bool overlap_range(int **A, int m, int n) {
  int low = INT_MAX;
  int high = INT_MIN;
  int l = 0;
  int h = 0;
  _Bool incl = 1;

  for(int i = 0; i < n; i++) {
	low = INT_MAX;
	high = INT_MIN;
	for(int j = 0; j < m; j++) {
	  high = max(high, A[i][j]);
	  low = min(low, A[i][j]);
	}
	h = min(h, high);
	l = min(l, low);
	incl = incl && h > l;
  }

  return incl;
}
