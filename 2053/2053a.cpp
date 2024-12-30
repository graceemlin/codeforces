#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while(t--) {
    int n;
    cin >> n;

    vector<int> elements(n);
    for (int i = 0; i < n; ++i) {
      cin >> elements[i];
    }

    bool possible = false;
    for (int i = 0; i < n - 1; ++i) {
      int smaller = min(elements[i], elements[i + 1]);
      int larger = max(elements[i], elements[i + 1]);
      if (2 * smaller > larger) {
	possible = true;
	break;
      }
    }

    cout << (possible ? "YES" : "NO") << endl;
  }
}
