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
    
    int64_t ops{};
    if (n % 2) {
      ops = (((n - k) + (k - 2)) / (k - 1)) + 1;
    } else {
      ops = (n + (k - 2)) / (k - 1);
    }

    cout << ops << endl;
  }
}
