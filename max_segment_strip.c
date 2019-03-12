/*
  Computes the sum of the segment subarray of an array whose
  sum is maximal. A segment subarray is a contiguous set of lines
  of the matrix.
  (example of the maximum segment strip of an array).
*/

int msegstrip(int **A, int m, int n){
  int max_bot_strip = 0;
  int max_strip = 0;
  int strip_sum = 0;
  for(int i = 0; i < n; i++) {
	strip_sum = 0;
	for(int j = 0; j < m; j++) {
	  strip_sum += A[i][j];
	}
	max_bot_strip = max(max_bot_strip + strip_sum, 0);
	max_strip = max(max_bot_strip, max_strip);
  }
  return max_strip;
}
