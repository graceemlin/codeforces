#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    
    vector<int> permutation(n, 0);
    
    bool odd_size = n % 2;
    if (odd_size) {
      cout << n << endl;

      if (n == 1) {
	cout << 1 << endl;
	continue;
      }
      
      permutation[n - 1] = n;
      permutation[n - 2] = n - 1;
      permutation[n - 3] = 1;

      for (int i = 0; i < n - 3; ++i) {
	permutation[i] = 2 + i;
      }
      
    } else {
      int bitmask = 1;
      while (bitmask <= n) {
	bitmask *= 2;
      }
      
      cout << --bitmask << endl;
      
      int complement = ~(n - 1) & bitmask;
      permutation[n - 1] = complement;
      permutation[n - 2] = n - 1;
      permutation[n - 3] = n - 2;
      permutation[n - 4] = 1;
      
      set<int> magic_nums = {complement, n - 1, n - 2, 1};
      for (int i = 0; i < n; ++i) {
	if ((i % 2) && !magic_nums.count(i)) {
	  magic_nums.insert(i);
	  permutation[n - 5] = i;
	  break;
	}
      }
      
      int curr_num = 2;
      for (int i = 0; i < n - 5; ++i) {
	while (magic_nums.count(curr_num)) {
	  ++curr_num;
	}
	
	permutation[i] = curr_num++;
      }
    }

    for (int element: permutation) {
      cout << element << ' ';
    }
    
    cout << endl;   
  }
}
