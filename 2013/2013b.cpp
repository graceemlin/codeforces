#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int t;
  cin >> t;
  
  while (t--) {
    long long n;
    cin >> n;

    vector<long long> fighters(n);
    
    for (int i = 0; i < n; ++i) {
      cin >> fighters[i];    
    }

    long long last_rating = fighters[n - 1];
    long long smallest_sum = fighters[n - 2];
    
    for (int i = n - 3; i >= 0; --i) {
      smallest_sum -= fighters[i];
    }
    
    cout << last_rating - smallest_sum << endl;
  }
}

