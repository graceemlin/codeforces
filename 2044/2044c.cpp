#include <bits/stdc++.h>
#include <algorithm>
#include <climits>
#include <cstdint>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  
  while (t--) {
    int m;
    cin >> m;
    int a;
    cin >> a;
    int b;
    cin >> b;
    int c;
    cin >> c;

    int sum =  min(a, m) + min(b, m) + c;

    cout << min(sum, m * 2) << endl;
  }
}
