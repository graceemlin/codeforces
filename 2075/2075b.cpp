#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int64_t t;
  cin >> t;
  
  while (t--) {
    int64_t n;
    cin >> n;
    int64_t k;
    cin >> k;
    
    vector<int64_t> a(n);
    for (int64_t i = 0; i < n; ++i) {
      cin >> a[i];
    }

    int64_t cost{};
    if (k == 1) {
      int64_t largest = *max_element(a.begin(), a.end());
      
      if ((largest > *a.begin()) && (largest > a.back())) {
	cost = largest + max(*a.begin(), a.back());
      } else {
	sort(a.rbegin(), a.rend());
	cost = a[0] + a[1];
      } 
    } else {
      priority_queue<int64_t, vector<int64_t>, greater<>> best_k_elements;
      for (int64_t i = 0; i < n; ++i) {
	best_k_elements.push(a[i]);
	if (best_k_elements.size() > (k + 1)) {
	  best_k_elements.pop();
	}
      }
      
      while (best_k_elements.size() > 0) {
	cost += best_k_elements.top();
	best_k_elements.pop();
      }
    }

    cout << cost << endl;
  }
}
