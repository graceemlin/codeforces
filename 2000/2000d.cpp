#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  
  while (t--) {
    long long n;
    cin >> n;
    
    vector<long long> points(n, 0);
    for (int i = 0; i < n; ++i) {
      cin >> points[i];
    }
    
    string indices;
    cin >> indices;
    
    vector<long long> prefix_sums(n, 0);
    
    auto it1 = find(indices.begin(), indices.end(), 'L');
    auto it2 = find(indices.begin(), indices.end(), 'R');
    
    if (it1 == indices.end() || it2 == indices.end()) {
      cout << 0 << endl;
      continue;
    }
    
    int first = indices.find('L');
    int last = indices.find_last_of('R');

    if (first > last) {
      cout << 0 << endl;
      continue;
    } else {
      long long running_total = 0;
      for (int i = first; i <= last; ++i) {
	running_total += points[i];
	prefix_sums[i] = running_total;
      }

      int l = first + 1;
      int r = last - 1;

      while (l < r) {
	if (indices[l] == 'L' && indices[r] == 'R') {
	  running_total += prefix_sums[r--] - prefix_sums[l++ - 1];
	} else if (indices[l] == 'R') {
	  ++l;
	} else if (indices[r] == 'L') {
	  --r;
	}
      }
      
      cout << running_total << endl;
    }
  }
}
