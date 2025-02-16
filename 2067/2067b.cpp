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

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }

    map<int, int> book;
    for (auto element : a) {
      book[element]++;
    }

    bool possible = true;
    for (int i = 1; i <= n; ++i) {
      if (book[i] == 1) {
	possible = false;
	break;
      } else if (book[i]) {
	book[i + 1] += book[i] - 2;
	book[i] = 2;
      }
    }
    
    cout << (possible ? "YES" : "NO") << endl;
  }
}
