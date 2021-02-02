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
  	bool checker = true;
  	// check if all a[i]'s are already less than or equal to d
  	for (int i = 0; i < n; i++) {
  		cin >> a[i];
  		if (a[i] > d) {
  			checker = false;
  		}
  	} 
		if (checker) {
			cout << "YES\n";
			continue;
		}                      
		// sort the array
		sort(a.begin(), a.end());
		// check if the sum of the first two elements is less than or equal to d
		// if true, this means that these two elements will be used to make all the other a[i]'s
		// less than or equal to d
		cout << (a[0] + a[1] <= d ? "YES" : "NO") << '\n';
  }
  return 0;
}      