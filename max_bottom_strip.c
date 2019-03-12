/*
  Computes the sum of the bottom subarray of an array whose
  sum is maximal.
  (example of the maximum bottom strip of an array).
*/

int _mbotstrip(int **A, int m, int n){
  int max_bot_strip = 0;
  int strip_sum = 0;

  for(int i = 0; i < n; i++) {
	strip_sum = 0;
	for(int j = 0; j < m; j++) {
	  strip_sum += A[i][j];
	}

	max_bot_strip = max(max_bot_strip + strip_sum, 0);
  }
  return max_bot_strip;
}
