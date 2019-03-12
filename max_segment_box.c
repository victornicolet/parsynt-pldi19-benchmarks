/*
  Computes the sum of the box subarray of an array whose
  sum is maximal. A box subarray is a contiguous set of planes
  of the 3D matrix along the outer dimension.
  (example of the maximum segment box of an array).
*/

int _msegbox(int ***A, int m, int n, int o){
  int mbbs = 0;
  int max_box = 0;
  int plane_sum = 0;

  for(int i = 0; i < n; i++) {
	plane_sum = 0;
	for(int j = 0; j < m; j++) {
	  for(int k = 0; k < o; k++) {
		bsum += A[i][j][k];
	  }
	}
	mbbs = max(mbbs + plane_sum, 0);
	max_box = max(mbbs, max_box);
  }
  return max_box;
}
