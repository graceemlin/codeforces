#include <bits/stdc++.h>
#include <algorithm>
#include <cstdint>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int64_t> sequence(n);
    for (int i = 0; i < n; ++i) {
      cin >> sequence[i];
    }

    if (is_sorted(sequence.begin(), sequence.end())) {
      cout << "YES" << endl;
      continue;
    }
    
    bool possible = true;
    for (int i = 0; i < n - 1; ++i) {
      if (sequence[i] > sequence[i + 1]) {
	possible = false;
	break;
      } else {
	sequence[i + 1] -= sequence[i]; 
      }
    }
    
    cout << (possible ? "YES" : "NO") << endl;
  }
}
