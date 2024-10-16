#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int t;
  cin >> t;

  while (t--) {
    long long x;
    cin >> x;
    long long y;
    cin >> y;
    long long k;
    cin >> k;
    
    long long curr_x = 0;
    long long curr_y = 0;

    bool even_x = x % k == 0;
    bool even_y = y % k == 0;
    
    long long turns = max(x / k + !even_x, y / k + !even_y);
    
    turns *= 2;
    turns -= (x / k + !even_x) > (y / k + !even_y);

    if (x == 0 && y == 0) {
      cout << 0 << endl;
      continue;
    }
    
    cout << turns << endl;
  }
}
