int fun_lcs(int *A, int *B, int m, int n) {
  int* l[m+1] = {0};
  int tmp1 = 0;
  int tmp2 = 0;
  int lcs = 0;

  for(int i = 0;  i < n; i++) {
    tmp2 = 0;
    tmp1 = 0;
    for(int j = 0; j < m; j++) {
      tmp1 = l[j+1];
      l[j+1] = (A[i] == B[j]) ? tmp2 + 1 : 0;
      tmp2 = tmp1;
      lcs = max(lcs, l[j+1]);
    }
  }

  return lcs;
}
