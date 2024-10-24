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

    vector<long long> elements(n);
    for (long long i = 0; i < n; ++i) {
      cin >> elements[i];
    }

    vector<long long> prefix_sums(n + 1);
    for (long long i = 0; i < n; ++i) {
      prefix_sums[i + 1] = prefix_sums[i] + elements[i];
    }

    long long beautiful_segments = 0;
    set<long long> curr_segment;
    
    for (long long i = 0; i <= n; ++i) { 
      if (curr_segment.count(prefix_sums[i])) {
        ++beautiful_segments;
        curr_segment.clear();
      }
      curr_segment.insert(prefix_sums[i]);
    }

    cout << beautiful_segments << endl;
  }
}
