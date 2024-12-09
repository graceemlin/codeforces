#include <bits/stdc++.h>
#include <cstdint>
#include <queue>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int64_t> strengths(n);
    for (int i = 0; i < n; ++i) {
      cin >> strengths[i];
    }

    priority_queue<int> heap;
    for (int i = 0; i < n; ++i) {
      heap.push(strengths[i]);
    }

    int64_t strongest = heap.top();
    heap.pop();
    int64_t second_strongest = heap.top();

    for (int64_t participant : strengths) {
      if (participant == strongest) {
        cout << participant - second_strongest << ' ';
      } else {
        cout << participant - strongest << ' ';
      }
    }

    cout << endl;
  }
}
