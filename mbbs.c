/*
  Computes the sum of the bottom subarray (2d) of an array (3d) whose
  sum is maximal.
  (example of the maximum bottom box of a brick).
*/

int _mbbs(int **A, int m, int n){
  int max_bot_box = 0;
  int plane_sum = 0;

  for(int i = 0; i < n; i++) {
	plane_sum = 0;
	for(int j = 0; j < m; j++) {
	  plane_sum += A[i][j];
	}

	max_bot_box = max(max_bot_box + plane_sum, 0);
  }
  return max_bot_box;
}
