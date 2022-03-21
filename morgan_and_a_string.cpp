#include <iostream>
#include <string>

using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--)
   {
    string A, B, res;
    cin >> A >> B;
    int a = 0, b = 0;
    while (a+b < A.size()+B.size()) {
      if (a == A.size()) 
      {
        res += B[b++];
      }
      else if (b == B.size()) {
        res += A[a++];
      }
      else {
        if (A[a] < B[b]) {
          res += A[a++];
        }
        else if (A[a] > B[b]) {
          res += B[b++];
        }
        else {
          int a1 = a+1, b1 = b+1;
          int n = -1;
          while (a1 < A.size() && b1 < B.size() && A[a1] == B[b1]) {
            if (A[a1] != A[a] && n == -1) {
              n = a1-a;
            }
            a1++;
            b1++;
          }
          if (n == -1) n = 1;
          if (a1 == A.size()) {
            for (int j = 0; j < n; j++) {
              res += B[b++];
            }
          }
          else if (b1 == B.size()) {
            for (int j = 0; j < n; j++) {
              res += A[a++];
            }
          }
          else if (B[b1] < A[a1]) {
            for (int j = 0; j < n; j++) {
              res += B[b++];
            }
          }
          else if (A[a1] < B[b1]) {
            for (int j = 0; j < n; j++) {
              res += A[a++];
            }
          }
          else {
            for (int j = 0; j < n; j++) {
              res += A[a++];
            }
          }
        }
      }
    }
    cout << res << endl;
  }
}