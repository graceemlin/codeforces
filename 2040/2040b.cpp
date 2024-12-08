#include <bits/stdc++.h>
#include <climits>
#include <cstdint>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int64_t n;
    cin >> n;
    
    int64_t ops = 1;
    int64_t product = 1;
    while (product < n) {
      ++product;
      product *= 2;
      ++ops;
    }
    
    cout << ops << endl;
  }
}
