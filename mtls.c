/*
  Maximum top left rectangle (or subarray) example of section 2.4
*/

int _mtls(int** a, int m, int n) {
  int *rec;
  int mtl_rec = 0;
  int row_mrec = 0;
  int sum = 0;

  for (int i = 0; i < n; i++) {
	sum = 0;
	row_mrec = 0;
    for(int j = 0; j < m; j++){
	  sum += a[i][j];
	  c[j] += sum;
	  row_mrec = max(c[j], row_mrec);
    }
	mtl_rec = max(row_mrec, mtl_rec);
  }
  return mtl_rec;
}
