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

    if (n == 1 || n == 3) {
      cout << -1 << endl;
      continue;
    }
    
    vector<int> big_num(n);
    
    bool even_digits = n % 2 == 0;
    if (even_digits) {
      big_num[n - 1] = 6;
      big_num[n - 2] = 6;
    } else {
      big_num[n - 1] = 6;
      big_num[n - 2] = 6;
      big_num[n - 3] = 3;
      big_num[n - 4] = 6;      
    }

    int fixed_digits = even_digits ? 2 : 4;
    for (int i = 0; i < n - fixed_digits; ++i) {
      big_num[i] = 3;
    }

    for (int digit : big_num) {
      cout << digit;
    }
    
    cout << endl;
  }
}
