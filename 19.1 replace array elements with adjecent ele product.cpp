vector<int> Replace_Array(vector<int> A){
  int n=A.size();
  if(n<=1) return A;
  int prev=A[0];
  A[0]= A[0]*A[1];
  for(int i=1;i<n-1;i++){
    int curr= A[i];
    A[i]= prev*A[i+1];
    prev=curr;
  }
  A[n-1]=A[n-1]*prev;
  return A;
}
