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

    vector<int> pieces(n);
    for (int i = 0; i < n; ++i) {
      cin >> pieces[i];
    }

    set<int> layers;
    for (int i = 1; i < 1000; i += 2) {
      layers.insert(i * i);
    }
    
    int sum{};
    int happy_days{};
    for (int i = 0; i < n; ++i) {
      sum += pieces[i];
      if (layers.count(sum)) {
        ++happy_days;
      }
    }

    cout << happy_days << endl;
  }
}
