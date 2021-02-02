#include <bits/stdc++.h>

using namespace std;
                             
int main() {                            
  ios::sync_with_stdio(false);
  cin.tie(0);          
  int tt;
  cin >> tt;
  while (tt--) {
  	int n, d;
  	cin >> n >> d;
  	vector<int> a(n);
  	for (int i = 0; i < n; i++) {
  		cin >> a[i];
  	}
  	// sort the array in non-decreasing order
  	sort(a.begin(), a.end());
  	// a.back <= d : this condition is for n = 1 element
  	// a[0] + a[1] <= d : to check if the first two elements can be used to make
  	// all the a[i]'s less than or equal to d
  	cout << (a.back() <= d || a[0] + a[1] <= d ? "YES" : "NO") << '\n';
  }
  return 0;
}      
