#include <bits/stdc++.h>
#include <utility>

using namespace std;

inline int query(int a, int b) {
      cout << "? " << a + 1 << ' ' << b + 1 << endl;
      int response;
      cin >> response;
      return --response;
}

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    vector<int> pairs(n, -1);
    
    for (int i = 1; i < n; ++i) {
      int prev = 0;

      while (true) {
	int response = query(i, prev);
	if (response  == i) break;
	prev = response;
      }
      
      pairs[i] = prev;
    }
    
    cout << "! ";
    for (int i = 1; i < n; ++i) {
      cout << pairs[i] + 1 << ' ' << i + 1 << ' ';
    }
    cout << endl;
  }
}
