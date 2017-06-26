#include <stdlib.h>
#include <iostream>
#include <string.h>
using namespace std;

bool isTidy(unsigned long n) {
  unsigned long num = n;
  if (num < 10) {
    return true;
  } else {
    bool tidy = true;
    while (num >= 10) {
      if (num % 10 < num / 10 % 10) {
        tidy = false;
        break;
      }
      num = num / 10;
    }
    return tidy;
  }
  return false;
}

unsigned long getTidy(unsigned long n) {
  unsigned long tidyNum = n;
  while (isTidy(tidyNum) != true) {
    tidyNum = tidyNum - 1;
  }
  return tidyNum;
}

int main() {
  unsigned long t, n;
  cin >> t;
  for (int i = 1; i <= t; ++i) {
    cin >> n;
    cout << "Case #" << i << ": " << getTidy(n) << endl;
  }
}

