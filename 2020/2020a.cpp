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
    long long k;
    cin >> k;

    long long cur = n;
    long long steps = 0;

    if (n < k || k == 1) {
      cout << n << endl;
      continue;
    }

    long long max_exp = 0;
    while (pow(k, max_exp) <= cur) {
      ++max_exp;
    }
    
    while (cur >= k) {
      --max_exp;
      steps += cur / pow(k, max_exp);
      cur -= floor(cur / pow(k, max_exp)) * pow(k, max_exp);
    }

    steps += cur;

    cout << steps << endl;
  }
}
