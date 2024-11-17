#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while (t--) {
    int k;
    cin >> k;

    vector<int> stream(k);
    for (int i = 0; i < k; ++i) {
      cin >> stream[i];
    }

    sort(stream.begin(), stream.end());
    
    map<int, int> frequencies;
    for (int i = 0; i < k; ++i) {
      frequencies[stream[i]]++;
    }

    int target_product = k - 2;
    
    for (int i = 0; i < k; ++i) {
      if (target_product % stream[i]) {
	continue;
      } else {
	frequencies[stream[i]]--;
	if (frequencies[target_product / stream[i]] > 0) {
	  cout << stream[i] << ' ' << (target_product / stream[i]) << endl;
	  break;
	}
      }
    }
  }
}
