/* Computes the sum of the box contiguous to the
   left, top and bottom edges of the array whose sum
   is maximal.

   The maximum left box sum.
*/

int _mlb(int ***A, int l, int m, int n) {
  int rs = 0;
  int mlr = 0;
  int bsum = 0;
  int rects[m] = 0;


  rects = malloc(m * sizeof(rects));

  for(int i = 0; i < n; i++) {
	rs = 0;
	mlr = 0;
	for(int j = 0; j < m; j++) {
	  bsum = 0;
	  for(int k = 0; k < l; k++) {
		bsum += A[i][j][k];
	  }
	  rs += bsum;
	  rects[j] += rs;
	  mlr = max(mlr, rects[j]);
	}
  }
  return mlr;
}
