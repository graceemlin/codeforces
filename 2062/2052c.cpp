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

    vector<int64_t> sequence(n);
    for (int i = 0; i < n; ++i) {
      cin >> sequence[i];
    }

    int64_t result = accumulate(sequence.begin(), sequence.end(), 0LL);
    for (int i = 0; i < n - 1; ++i) {
      int64_t before = accumulate(sequence.begin(), sequence.end(), 0LL);
      
      vector<int64_t> curr(n - i - 1);
      for (int j = 0; j < n - i - 1; ++j) {
	curr[j] = sequence[j + 1] - sequence[j];
      }

      int64_t after = accumulate(curr.begin(), curr.end(), 0LL);
      after = max(-after, after);
      after = max(before, after);  
      result = max(result, after);
      
      sequence = curr;
    }
    
    cout << result << endl;
  }
}
