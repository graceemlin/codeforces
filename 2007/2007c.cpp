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
    int a;
    cin >> a;
    int b;
    cin >> b;

    vector<long long> elements(n);

    for (int i = 0; i < n; ++i) {
      cin >> elements[i];
    }

    long long max_original = 0;
    for (int i = 0; i < n; ++i) {
      if (elements[i] > max_original) {
	max_original = elements[i];
      }
    }

    long long mod_val = gcd(a, b);
    for (int i = 0; i < n; ++i) {
      elements[i] %= mod_val;
    }

    sort(elements.begin(), elements.end());

    long long answer = elements[0] - elements[n - 1] + mod_val;
    
    for (int i = 0; i < n - 1; ++i) {
      answer = max(elements[i + 1] - elements[i], answer);
    }
    
    cout << mod_val - answer << endl;
  }
}
