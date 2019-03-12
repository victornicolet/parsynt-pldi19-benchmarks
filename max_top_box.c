/*
  Computes the sum of the top subarray of an array whose
  sum is maximal.
  (example of the maximum top box of an array).
*/

int _mtopbox(int ***A, int m, int n, int o){
  int bsum = 0;
  int max_top_box = 0;

  for(int i = 0; i < n; i++) {
	for(int j = 0; j < m; j++) {
	  for(int k = 0; k < o; k++) {
		bsum += A[i][j][k];
	  }
	}
	max_top_box = max(max_top_box, bsum);
  }
  return max_top_box;
}
