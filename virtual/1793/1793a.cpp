#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while (t--) {
    long long a;
    cin >> a;
    long long b;
    cin >> b;

    long long n;
    cin >> n;
    long long m;
    cin >> m;

    long long min_coins = 0;
    long long potatoes = 0;
    
    while (potatoes < n) {
      if (potatoes + m + 1 > n) {
	min_coins += min(a, b) * (n - potatoes);
	break;
      } else {
	long long remaining_ops = n / (m + 1);
        long long cheapest_operation = min(m * a, (m + 1) * b);
	
	min_coins += remaining_ops * cheapest_operation;
	potatoes += remaining_ops * (m + 1);
      }
    }
    
    cout << min_coins << endl;
  }
}
