int _mode(int *a, int n, int m) {

  int cnt = 0;
  int elt = 0;
  int mode = 0;
  int max_cnt = INT_MIN;

  for(int i = 0; i < n; i++){
    elt = a[i];
    cnt = 0;
    for(int j = 0; j < n; j++){
      if(a[j] == elt) {
		cnt++;
      }
    }
    if(cnt > max_cnt){
      max_cnt = cnt;
      mode = elt;
    }
  }
  return mode;
}
