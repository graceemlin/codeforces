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

    multiset <long long> elements;
    for (int i = 0; i < n; ++i) {
      long long x;
      cin >> x;
      elements.insert(x);
    }

    while (elements.size() > 1) {
      long long low = *elements.begin();
      long long next = *++elements.begin();
      long long avg = floor((low + next) / 2);
      
      elements.erase(elements.find(low));
      elements.erase(elements.find(next));
      elements.insert(avg);
    }

    cout << *elements.begin() << endl;
  }
}
