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
    
    if (n % 2 == 0) {
      for (int i = 0; i < n; ++i) {
	cout << (i % 2 == 0 ? i + 1 : i) << ' ';
      }
      cout << endl;
      continue;
    }
    
    if (n <= 25) {
      cout << -1 << endl;
      continue;
    }
    
    for (int i = 0; i < n; ++i) {
      if (i == 0 || i == 9 || i == 25) {
	cout << 1 << ' ';
      } else if (i == 10 || i == 26) {
	cout << 2 << ' ';
      } else {
	cout << (i % 2 ? i + 2 : i + 1) << ' ';
      }
    }
    cout << endl;
  }
}
