#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; scanf("%d",&t);
	while(t--){
	    string s; cin>>s;
	    int low=0, high=s.length()-1;
	    while(low<high){
	        swap(s[low],s[high]);
	        low++; high--;
	    }
	    cout << s << endl;
	}
	return 0;
}
