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
    int x;
    cin >> x;

    if (n == 1) {
      cout << x << endl;
      continue;
    }

    int pops = 1;
    int elements{};
    for (int i = 0; i < n - 1; ++i) {
      if (i <= x && (i & x) == i) {
	++elements;
	cout << i << " ";
	if (i == pops) {
	  pops <<= 1;
	}
      }
    }

    bool possible = elements == pops && __builtin_clz(pops) == __builtin_clz(x);
    possible |= __builtin_clz(pops >> 1) == __builtin_clz(x) && (elements & x) == elements;
    if (possible) {
      cout << elements << " ";
      ++elements;
    }
    
    for (int i = elements; i < n; ++i) {
      cout << x << " ";
    }
    cout << endl;
  }
}
