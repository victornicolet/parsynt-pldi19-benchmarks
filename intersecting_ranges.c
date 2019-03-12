/*
  This function checks that the ranges of all the lines are overlapping.
*/

_Bool intersect_range(int *L, int* H, int m, int n) {

  _Bool b = 0;
  _Bool b0 = 0;

  for(int i = 0; i < n; i++) {
	b0 = 0;
	for(int j = 0; j < m; j++) {
	  b0 = ((H[i] <= H[j]) && (L[j] <= H[i])) ||
		((H[i] >= H[j]) && (L[i] <= H[j]));
	}
	b = b0 || b;

  }

  return b;
}
