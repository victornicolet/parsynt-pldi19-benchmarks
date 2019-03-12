/*
  Computes the sum of the top subarray of an array whose
  sum is maximal.
  (example of the maximum top strip of an array).
*/

int _mtopstrip(int **A, int m, int n){
  int ts_sum = 0;
  int max_ts = 0;
  int strip_sum = 0;
  for(int i = 0; i < n; i++) {
	for(int j = 0; j < m; j++) {
	  ts_sum += A[i][j];
	}
	max_ts = max(max_ts, ts_sum);
  }
  return max_ts;
}
