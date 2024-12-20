#include <bits/stdc++.h>
#include <algorithm>
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
    int k;
    cin >> k;

    vector<int> result(n, 0);
    int index = k - 1;
    for (int i = 1; i <= n; ++i) {
      if (result[index] != 0) {
        break;
      }
      result[index] = i;
      index += k;
      index %= n;
    }

    int next = *max_element(result.begin(), result.end());
    for (int i = 0; i < n; ++i) {
      if (result[i] == 0) {
        result[i] = ++next;
      }
    }

    for (int i = 0; i < n; ++i) {
      cout << result[i] << ' ';
    }
    
    cout << endl;
  }
}
