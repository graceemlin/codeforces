#include <bits/stdc++.h>
#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdint>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    priority_queue<int> heap;
    for (int i = 1; i <= n; ++i) {
      heap.push(i);
    }

    vector<pair<int, int>> result;

    while (heap.size() > 1) {
      const int largest = heap.top();
      heap.pop();
      const int second_largest = heap.top();
      heap.pop();

      result.push_back({largest, second_largest});
      heap.push((ceil((largest + second_largest) / 2.0)));
    }

    cout << heap.top() << endl;

    for (const auto& [a, b] : result) {
      cout << a << ' ' << b << endl;
    }
  }
}
