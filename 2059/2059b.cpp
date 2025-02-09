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
    int k;
    cin >> k;
    
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }

    int answer = 2;
    int mex{};
    bool found = false;
    if (n == k) {
      for (int i = 1; i < n; i += 2) {
	++mex;
	if (a[i] != mex) {
	  answer = mex;
	  found = true;
	  break;
	}
      }

      if (!found) {
	answer = k / 2 + 1;
      }
    } else {
      for (int i = 1; i <= n - k + 1; ++i) {
	if (a[i] != 1) {
	  answer = 1;
	  break;
	}
      }
    }

    cout << answer << endl;
  }
}
