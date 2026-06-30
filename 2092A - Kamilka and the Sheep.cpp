#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int tests, len, num;
  int minNum = INT_MAX;
  int maxNum = INT_MIN;
  cin >> tests;
  
  for (int i=0; i<tests; i++) {
      cin >> len;
      for (int j=0; j<len; j++) {
          cin >> num;
          if(num > maxNum) maxNum = num;
          if(num < minNum) minNum = num;
      }
      cout << maxNum - minNum << endl;
      minNum = INT_MAX;
      maxNum = INT_MIN;
  }
  return 0;
}