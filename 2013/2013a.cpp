#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int t;
  cin >> t;
  
  while (t--) {
    long long n;
    cin >> n;
    long long x;
    cin >> x;
    long long y;
    cin >> y;

    bool not_divisible = n % min(x, y);
    
    cout << (n / min(x, y)) + not_divisible << endl;
  }
}
