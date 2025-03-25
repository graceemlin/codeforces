#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int64_t t;
  cin >> t;
  while (t--) {
    int64_t n;
    cin >> n;
    int64_t k;
    cin >> k;
    
    vector<int> destinations(n);

    for (int i = 0; i < n; ++i) {
      if (i == n - 1) {
	destinations[i] = n - 1;
      } else if (i == n - 2) {
	destinations[i] = n;
      } else {
	destinations[i] = n - !(k % 2); 
      }
    }
    
    for (int teleporter: destinations) {
      cout << teleporter << " ";
    }
    cout << endl;
  }
}
