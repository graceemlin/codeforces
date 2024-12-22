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
    int a;
    cin >> a;
    int b;
    cin >> b;
    int c;
    cin >> c;

    int group[3] = {a, b, c};
    int triple = a + b + c;
    int days = (n / triple) * 3;

    int additional{};
    int remainder = n % triple;
    while (remainder > 0) {
      ++days;
      remainder -= group[additional++];
    }

    cout << days << endl;
  }
}
