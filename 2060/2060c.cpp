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

    sort(elements.rbegin(), elements.rend());

    int score{};
    
    int left{};
    int right = n - 1;
    while (left < right) {
      if (elements[left] + elements[right] > k) {
	++left;
      } else if (elements[left] + elements[right] < k) {
	--right;
      } else {
	++left;
	--right;
	++score;
      }
    }
    
    cout << score << endl;
  }
}
