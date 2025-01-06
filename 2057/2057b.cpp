#include <bits/stdc++.h>
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

    vector<int> elements(n);
    for (int i = 0; i < n; ++i) {
      cin >> elements[i];
    }

    map<int, int> book;
    for (int i = 0; i < n; ++i) {
      ++book[elements[i]];
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> min_heap;
    for (const auto& [num, freq] : book) {
      min_heap.push({freq, num});
    }

    int ops{};
    while (ops < k && !min_heap.empty()) {
      ops += min_heap.top().first;
      if (ops <= k) {
	min_heap.pop();
      }
    }
    
    cout << max((int)min_heap.size(), 1) << endl;
  }
}
