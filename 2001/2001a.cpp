#include <bits/stdc++.h>
#include <climits>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int t;
  cin >> t;
  
  while (t--) {
    int n;
    cin >> n;

    vector<int> elements(n);
    for (int i = 0; i < n; ++i) {
      cin >> elements[i];
    }
    
    vector<int> freq(101, 0);
    for (int j = 0; j < n; ++j) {
      freq[elements[j]]++;
    }
    
    int local_max = 0;
    for (int k = 0; k < freq.size(); ++k) {
      local_max = max(local_max, freq[k]);
    }
    
    cout << n - local_max << endl;
  }
}
