#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int t;
  cin >> t;
  
  while (t--) {
    long long n;
    cin >> n;
    long long k;
    cin >> k;

    vector<long long> items(n, 0);
    for (int i = 0; i < n; ++i) {
      cin >> items[i];
    }

    sort(items.begin(), items.end(), greater());

    long long alice_total = 0;
    long long bob_total = 0;

    for (int i = 1; i < n; i += 2) {
      if (items[i - 1] - items[i] < k) {
	k -= items[i - 1] - items[i];
	items[i] = items[i - 1];
      } else {
	items[i] += k;
	break;
      }
    }
    
    for (int i = 0; i < n; ++i) {
      if (!(i % 2)) {
	alice_total += items[i];
      } else {
	bob_total += items[i];
      }
    }
    
    cout << alice_total - bob_total << endl;
  }
}
