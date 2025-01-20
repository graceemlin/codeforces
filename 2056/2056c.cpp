#include <bits/stdc++.h>
#include <climits>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  
  while (t--) {
    int n;
    cin >> n;

    cout << 1 << " " << 1 << " " << 2 << " " << 3 << " ";
    for (int i = 4; i < n - 2; ++i) {
      cout << i << " ";
    }
    cout << 1 << " " << 2 << endl;
    
  }
}
