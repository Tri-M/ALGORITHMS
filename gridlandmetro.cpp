#include <iostream>
using namespace std;
int main()
 {
  long long int r, c, t, i;
  cin >> r >> c >> t;
  long long int r1[t], c1[t], c2[t], count = 0;
  for (i = 0; i < t; i++) {
    cin >> r1[i] >> c1[i] >> c2[i];
  }
  for (i = 0; i < t; i++) {
    for (int j = i + 1; j < t; j++) {
      if (r1[i] == r1[j]) {
        if (c1[i] >= c1[j] && c2[i] <= c2[j]) {
          c1[i] = 0;
          c2[i] = -1;
        }
        if (c1[i] <= c1[j] && c2[i] >= c1[j] && c2[i] <= c2[j]) {
          c1[j] = c1[i];
          c1[i] = 0;
          c2[i] = -1;
        }
        if (c1[i] >= c1[j] && c1[i] <= c2[j] && c2[i] >= c2[j]) {
          c2[j] = c2[i];
          c1[i] = 0;
          c2[i] = -1;
        }
        if (c1[i] <= c1[j] && c2[i] >= c2[j]) {
          c1[j] = c1[i];
          c2[j] = c2[i];
          c1[i] = 0;
          c2[i] = -1;
        }
        break;
      }
    }
  }
  for (i = 0; i < t; i++) {
    count = count + c2[i] - c1[i] + 1;
  }
  cout << r * c - count;
}