#include<bits/stdc++.h>
using namespace std;

int countOnes (string str) {
    int count = 0;
    for(char c: str) {
        if(c == '1') count++;
    }
    return count;
}

void printOnesOnBoard (int len, string str, int totalOnes) {
    int count = 0;
    for(char c: str) {
        if(c == '1') count += (totalOnes - 1);
        else count += (totalOnes + 1);
    }
    cout << count << endl;
} 

int main() {
  int tests, len;
  string str;
  cin >> tests;
  
  for (int i=0; i<tests; i++) {
      cin >> len;
      cin >> str;
      printOnesOnBoard (len, str, countOnes(str));
  }
  return 0;
}