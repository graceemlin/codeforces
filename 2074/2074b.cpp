#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int64_t n;
    cin >> n;

    vector<int64_t> a(n);
    for (int64_t i = 0; i < n; ++i) {
      cin >> a[i];
    }

    priority_queue<int64_t, vector<int64_t>, greater<>> elements;
    for (int64_t i = 0; i < n; ++i) {
      elements.push(a[i]);
    }

    while (elements.size() > 1) {
      int64_t first = elements.top();
      elements.pop();
      int64_t second = elements.top();
      elements.pop();
      int64_t third = first + second - 1;
      elements.push(third);
    }

    cout << elements.top() << endl;
  }
}
