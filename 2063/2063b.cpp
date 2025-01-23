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
    int l;
    cin >> l;
    int r;
    cin >> r;

    vector<int64_t> elements(n);
    for (int i = 0; i < n; ++i) {
      cin >> elements[i];
    }

    const int k = r - l + 1;
    
    auto k_largest = [&] (const int left_index, const int right_index) -> int64_t {
      priority_queue<int> heap;
      int64_t sum{};
      
      for (int i = left_index; i < right_index; ++i) {
	heap.push(elements[i]);
	if (heap.size() > k) {
	  heap.pop();
	}
      }
      
      while (!heap.empty()) {
	sum += heap.top();
	heap.pop();
      }

      return sum;
    };
      
    const int64_t left_sum = k_largest(0, r);
    const int64_t right_sum = k_largest(l - 1, n);

    cout << min(left_sum, right_sum) << endl;
  }
}
