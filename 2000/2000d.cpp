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
    
    vector<int> points(n, 0);
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
    
    int first = (int)indices.find('L');
    int last = (int)indices.find_last_of('R');

    if (first > last) {
      cout << 0 << endl;
      continue;
    } else {
      long long running_total = 0;
      for (int i = first; i <= last; ++i) {
	running_total += points[i];
	prefix_sums[i] = running_total;
      }
      
      for (int i = (first + 1), j = (last - 1); i < j; ) {
	if ( indices[i] == 'L' && indices[j] == 'R') {
	  running_total += (prefix_sums[j] - prefix_sums[i - 1]);
	  ++i;
	  --j;
	} else if (indices[i] == 'R') {
	  ++i;
	} else if (indices[j] == 'L') {
	  --j;
	}
      }
      
      cout << running_total << endl;
    }
  }
}
