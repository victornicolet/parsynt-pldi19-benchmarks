/*
  This function checks that the range of each line is decreasing,
  meaning that the range of a line j > i is a superset of the range
  of the line i. The range is the smallest interval that contains all
  the elements of a line.
*/


_Bool pyramid_range(int **A, int m, int n) {
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
	if(!(high <= h) || !(low >= l)) incl = 0;
	l = low;
	h = high;
  }

  return incl;
}
