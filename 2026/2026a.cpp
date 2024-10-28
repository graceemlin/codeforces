#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  
  while (t--) {
    int x;
    cin >> x;
    int y;
    cin >> y;
    int k;
    cin >> k;

    int perpendicular_bound = min(x, y);
    
    int ax = 0;
    int ay = 0; 
    int bx = perpendicular_bound;
    int by = perpendicular_bound;

    int cx = 0;
    int cy = perpendicular_bound;
    int dx = perpendicular_bound;
    int dy = 0;
    
    cout << ax << ' ' << ay << ' ' << bx << ' ' << by << endl;
    cout << cx << ' ' << cy << ' ' << dx << ' ' << dy << endl;
  }
}
