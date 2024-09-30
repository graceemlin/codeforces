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

    vector<int> elements(n);
    for (int i = 0; i < n; ++i) {
      cin >> elements[i];
    }

    int odd_max = 0;
    int even_max = 0;

    int odd_count = 0;
    int even_count = 0;

    for (int i = 0; i < n; ++i) {
      if (i % 2 == 0) {
	even_max = max(even_max, elements[i]);
	++even_count;
      } else {
	odd_max = max(odd_max, elements[i]);
	++odd_count;
      }
    }

    cout << max(odd_max + odd_count, even_max + even_count) << endl;
  }
}
